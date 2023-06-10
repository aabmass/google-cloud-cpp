// Copyright 2021 Google LLC
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
// source: google/iam/admin/v1/iam.proto

#include "google/cloud/iam/admin/v1/internal/iam_stub_factory.h"
#include "google/cloud/iam/admin/v1/internal/iam_auth_decorator.h"
#include "google/cloud/iam/admin/v1/internal/iam_logging_decorator.h"
#include "google/cloud/iam/admin/v1/internal/iam_metadata_decorator.h"
#include "google/cloud/iam/admin/v1/internal/iam_stub.h"
#include "google/cloud/iam/admin/v1/internal/iam_tracing_stub.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/algorithm.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/log.h"
#include "google/cloud/options.h"
#include <google/iam/admin/v1/iam.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace iam_admin_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

std::shared_ptr<IAMStub> CreateDefaultIAMStub(google::cloud::CompletionQueue cq,
                                              Options const& options) {
  auto auth = google::cloud::internal::CreateAuthenticationStrategy(
      std::move(cq), options);
  auto channel = auth->CreateChannel(options.get<EndpointOption>(),
                                     internal::MakeChannelArguments(options));
  auto service_grpc_stub = google::iam::admin::v1::IAM::NewStub(channel);
  std::shared_ptr<IAMStub> stub =
      std::make_shared<DefaultIAMStub>(std::move(service_grpc_stub));

  if (auth->RequiresConfigureContext()) {
    stub = std::make_shared<IAMAuth>(std::move(auth), std::move(stub));
  }
  stub = std::make_shared<IAMMetadata>(
      std::move(stub), std::multimap<std::string, std::string>{});
  if (internal::Contains(options.get<TracingComponentsOption>(), "rpc")) {
    GCP_LOG(INFO) << "Enabled logging for gRPC calls";
    stub = std::make_shared<IAMLogging>(std::move(stub),
                                        options.get<GrpcTracingOptionsOption>(),
                                        options.get<TracingComponentsOption>());
  }
  if (internal::TracingEnabled(options)) {
    stub = MakeIAMTracingStub(std::move(stub));
  }
  return stub;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace iam_admin_v1_internal
}  // namespace cloud
}  // namespace google
