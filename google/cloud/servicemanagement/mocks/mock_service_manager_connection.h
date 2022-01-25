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
// source: google/api/servicemanagement/v1/servicemanager.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SERVICEMANAGEMENT_MOCKS_MOCK_SERVICE_MANAGER_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SERVICEMANAGEMENT_MOCKS_MOCK_SERVICE_MANAGER_CONNECTION_H

#include "google/cloud/servicemanagement/service_manager_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace servicemanagement_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class MockServiceManagerConnection
    : public servicemanagement::ServiceManagerConnection {
 public:
  MOCK_METHOD(StreamRange<google::api::servicemanagement::v1::ManagedService>,
              ListServices,
              (google::api::servicemanagement::v1::ListServicesRequest request),
              (override));

  MOCK_METHOD(
      StatusOr<google::api::servicemanagement::v1::ManagedService>, GetService,
      (google::api::servicemanagement::v1::GetServiceRequest const& request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::api::servicemanagement::v1::ManagedService>>,
      CreateService,
      (google::api::servicemanagement::v1::CreateServiceRequest const& request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::api::servicemanagement::v1::OperationMetadata>>,
      DeleteService,
      (google::api::servicemanagement::v1::DeleteServiceRequest const& request),
      (override));

  MOCK_METHOD(future<StatusOr<
                  google::api::servicemanagement::v1::UndeleteServiceResponse>>,
              UndeleteService,
              (google::api::servicemanagement::v1::UndeleteServiceRequest const&
                   request),
              (override));

  MOCK_METHOD(
      StreamRange<google::api::Service>, ListServiceConfigs,
      (google::api::servicemanagement::v1::ListServiceConfigsRequest request),
      (override));

  MOCK_METHOD(
      StatusOr<google::api::Service>, GetServiceConfig,
      (google::api::servicemanagement::v1::GetServiceConfigRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::api::Service>, CreateServiceConfig,
      (google::api::servicemanagement::v1::CreateServiceConfigRequest const&
           request),
      (override));

  MOCK_METHOD(
      future<StatusOr<
          google::api::servicemanagement::v1::SubmitConfigSourceResponse>>,
      SubmitConfigSource,
      (google::api::servicemanagement::v1::SubmitConfigSourceRequest const&
           request),
      (override));

  MOCK_METHOD(
      StreamRange<google::api::servicemanagement::v1::Rollout>,
      ListServiceRollouts,
      (google::api::servicemanagement::v1::ListServiceRolloutsRequest request),
      (override));

  MOCK_METHOD(
      StatusOr<google::api::servicemanagement::v1::Rollout>, GetServiceRollout,
      (google::api::servicemanagement::v1::GetServiceRolloutRequest const&
           request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::api::servicemanagement::v1::Rollout>>,
      CreateServiceRollout,
      (google::api::servicemanagement::v1::CreateServiceRolloutRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<
          google::api::servicemanagement::v1::GenerateConfigReportResponse>,
      GenerateConfigReport,
      (google::api::servicemanagement::v1::GenerateConfigReportRequest const&
           request),
      (override));

  MOCK_METHOD(
      future<
          StatusOr<google::api::servicemanagement::v1::EnableServiceResponse>>,
      EnableService,
      (google::api::servicemanagement::v1::EnableServiceRequest const& request),
      (override));

  MOCK_METHOD(
      future<
          StatusOr<google::api::servicemanagement::v1::DisableServiceResponse>>,
      DisableService,
      (google::api::servicemanagement::v1::DisableServiceRequest const&
           request),
      (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace servicemanagement_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SERVICEMANAGEMENT_MOCKS_MOCK_SERVICE_MANAGER_CONNECTION_H
