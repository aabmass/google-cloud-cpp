// Copyright 2023 Google LLC
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
// source: google/cloud/securesourcemanager/v1/secure_source_manager.proto

#include "google/cloud/securesourcemanager/v1/secure_source_manager_connection.h"
#include "google/cloud/securesourcemanager/v1/internal/secure_source_manager_connection_impl.h"
#include "google/cloud/securesourcemanager/v1/internal/secure_source_manager_option_defaults.h"
#include "google/cloud/securesourcemanager/v1/internal/secure_source_manager_stub_factory.h"
#include "google/cloud/securesourcemanager/v1/internal/secure_source_manager_tracing_connection.h"
#include "google/cloud/securesourcemanager/v1/secure_source_manager_options.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/unified_grpc_credentials.h"
#include <memory>

namespace google {
namespace cloud {
namespace securesourcemanager_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

SecureSourceManagerConnection::~SecureSourceManagerConnection() = default;

StreamRange<google::cloud::securesourcemanager::v1::Instance>
SecureSourceManagerConnection::ListInstances(
    google::cloud::securesourcemanager::v1::
        ListInstancesRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::securesourcemanager::v1::Instance>>();
}

StatusOr<google::cloud::securesourcemanager::v1::Instance>
SecureSourceManagerConnection::GetInstance(
    google::cloud::securesourcemanager::v1::GetInstanceRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::securesourcemanager::v1::Instance>>
SecureSourceManagerConnection::CreateInstance(
    google::cloud::securesourcemanager::v1::CreateInstanceRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::securesourcemanager::v1::Instance>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::securesourcemanager::v1::OperationMetadata>>
SecureSourceManagerConnection::DeleteInstance(
    google::cloud::securesourcemanager::v1::DeleteInstanceRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::securesourcemanager::v1::OperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StreamRange<google::cloud::securesourcemanager::v1::Repository>
SecureSourceManagerConnection::ListRepositories(
    google::cloud::securesourcemanager::v1::
        ListRepositoriesRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::securesourcemanager::v1::Repository>>();
}

StatusOr<google::cloud::securesourcemanager::v1::Repository>
SecureSourceManagerConnection::GetRepository(
    google::cloud::securesourcemanager::v1::GetRepositoryRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::securesourcemanager::v1::Repository>>
SecureSourceManagerConnection::CreateRepository(
    google::cloud::securesourcemanager::v1::CreateRepositoryRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::securesourcemanager::v1::Repository>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::securesourcemanager::v1::OperationMetadata>>
SecureSourceManagerConnection::DeleteRepository(
    google::cloud::securesourcemanager::v1::DeleteRepositoryRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::securesourcemanager::v1::OperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::iam::v1::Policy>
SecureSourceManagerConnection::GetIamPolicyRepo(
    google::iam::v1::GetIamPolicyRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::iam::v1::Policy>
SecureSourceManagerConnection::SetIamPolicyRepo(
    google::iam::v1::SetIamPolicyRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
SecureSourceManagerConnection::TestIamPermissionsRepo(
    google::iam::v1::TestIamPermissionsRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

std::shared_ptr<SecureSourceManagerConnection>
MakeSecureSourceManagerConnection(Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 UnifiedCredentialsOptionList,
                                 SecureSourceManagerPolicyOptionList>(options,
                                                                      __func__);
  options = securesourcemanager_v1_internal::SecureSourceManagerDefaultOptions(
      std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto auth = internal::CreateAuthenticationStrategy(background->cq(), options);
  auto stub =
      securesourcemanager_v1_internal::CreateDefaultSecureSourceManagerStub(
          std::move(auth), options);
  return securesourcemanager_v1_internal::
      MakeSecureSourceManagerTracingConnection(
          std::make_shared<securesourcemanager_v1_internal::
                               SecureSourceManagerConnectionImpl>(
              std::move(background), std::move(stub), std::move(options)));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace securesourcemanager_v1
}  // namespace cloud
}  // namespace google
