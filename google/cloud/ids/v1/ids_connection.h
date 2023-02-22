// Copyright 2022 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

// Generated by the Codegen C++ plugin.
// If you make any local changes, they will be lost.
// source: google/cloud/ids/v1/ids.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_IDS_V1_IDS_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_IDS_V1_IDS_CONNECTION_H

#include "google/cloud/ids/v1/ids_connection_idempotency_policy.h"
#include "google/cloud/ids/v1/internal/ids_retry_traits.h"
#include "google/cloud/ids/v1/internal/ids_stub.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace ids_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using IDSRetryPolicy = ::google::cloud::internal::TraitBasedRetryPolicy<
    ids_v1_internal::IDSRetryTraits>;

using IDSLimitedTimeRetryPolicy =
    ::google::cloud::internal::LimitedTimeRetryPolicy<
        ids_v1_internal::IDSRetryTraits>;

using IDSLimitedErrorCountRetryPolicy =
    ::google::cloud::internal::LimitedErrorCountRetryPolicy<
        ids_v1_internal::IDSRetryTraits>;

/**
 * The `IDSConnection` object for `IDSClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `IDSClient`. This allows users to inject custom behavior
 * (e.g., with a Google Mock object) when writing tests that use objects of type
 * `IDSClient`.
 *
 * To create a concrete instance, see `MakeIDSConnection()`.
 *
 * For mocking, see `ids_v1_mocks::MockIDSConnection`.
 */
class IDSConnection {
 public:
  virtual ~IDSConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual StreamRange<google::cloud::ids::v1::Endpoint> ListEndpoints(
      google::cloud::ids::v1::ListEndpointsRequest request);

  virtual StatusOr<google::cloud::ids::v1::Endpoint> GetEndpoint(
      google::cloud::ids::v1::GetEndpointRequest const& request);

  virtual future<StatusOr<google::cloud::ids::v1::Endpoint>> CreateEndpoint(
      google::cloud::ids::v1::CreateEndpointRequest const& request);

  virtual future<StatusOr<google::cloud::ids::v1::OperationMetadata>>
  DeleteEndpoint(google::cloud::ids::v1::DeleteEndpointRequest const& request);
};

/**
 * A factory function to construct an object of type `IDSConnection`.
 *
 * The returned connection object should not be used directly; instead it
 * should be passed as an argument to the constructor of IDSClient.
 *
 * The optional @p options argument may be used to configure aspects of the
 * returned `IDSConnection`. Expected options are any of the types in
 * the following option lists:
 *
 * - `google::cloud::CommonOptionList`
 * - `google::cloud::GrpcOptionList`
 * - `google::cloud::UnifiedCredentialsOptionList`
 * - `google::cloud::ids_v1::IDSPolicyOptionList`
 *
 * @note Unexpected options will be ignored. To log unexpected options instead,
 *     set `GOOGLE_CLOUD_CPP_ENABLE_CLOG=yes` in the environment.
 *
 * @param options (optional) Configure the `IDSConnection` created by
 * this function.
 */
std::shared_ptr<IDSConnection> MakeIDSConnection(Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace ids_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_IDS_V1_IDS_CONNECTION_H
