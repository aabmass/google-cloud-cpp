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
// source: google/cloud/pubsublite/v1/admin.proto

#include "google/cloud/pubsublite/internal/admin_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include <google/cloud/pubsublite/v1/admin.grpc.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace pubsublite_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

AdminServiceStub::~AdminServiceStub() = default;

StatusOr<google::cloud::pubsublite::v1::Topic>
DefaultAdminServiceStub::CreateTopic(
    grpc::ClientContext& client_context,
    google::cloud::pubsublite::v1::CreateTopicRequest const& request) {
  google::cloud::pubsublite::v1::Topic response;
  auto status = grpc_stub_->CreateTopic(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::pubsublite::v1::Topic>
DefaultAdminServiceStub::GetTopic(
    grpc::ClientContext& client_context,
    google::cloud::pubsublite::v1::GetTopicRequest const& request) {
  google::cloud::pubsublite::v1::Topic response;
  auto status = grpc_stub_->GetTopic(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::pubsublite::v1::TopicPartitions>
DefaultAdminServiceStub::GetTopicPartitions(
    grpc::ClientContext& client_context,
    google::cloud::pubsublite::v1::GetTopicPartitionsRequest const& request) {
  google::cloud::pubsublite::v1::TopicPartitions response;
  auto status =
      grpc_stub_->GetTopicPartitions(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::pubsublite::v1::ListTopicsResponse>
DefaultAdminServiceStub::ListTopics(
    grpc::ClientContext& client_context,
    google::cloud::pubsublite::v1::ListTopicsRequest const& request) {
  google::cloud::pubsublite::v1::ListTopicsResponse response;
  auto status = grpc_stub_->ListTopics(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::pubsublite::v1::Topic>
DefaultAdminServiceStub::UpdateTopic(
    grpc::ClientContext& client_context,
    google::cloud::pubsublite::v1::UpdateTopicRequest const& request) {
  google::cloud::pubsublite::v1::Topic response;
  auto status = grpc_stub_->UpdateTopic(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

Status DefaultAdminServiceStub::DeleteTopic(
    grpc::ClientContext& client_context,
    google::cloud::pubsublite::v1::DeleteTopicRequest const& request) {
  google::protobuf::Empty response;
  auto status = grpc_stub_->DeleteTopic(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

StatusOr<google::cloud::pubsublite::v1::ListTopicSubscriptionsResponse>
DefaultAdminServiceStub::ListTopicSubscriptions(
    grpc::ClientContext& client_context,
    google::cloud::pubsublite::v1::ListTopicSubscriptionsRequest const&
        request) {
  google::cloud::pubsublite::v1::ListTopicSubscriptionsResponse response;
  auto status =
      grpc_stub_->ListTopicSubscriptions(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::pubsublite::v1::Subscription>
DefaultAdminServiceStub::CreateSubscription(
    grpc::ClientContext& client_context,
    google::cloud::pubsublite::v1::CreateSubscriptionRequest const& request) {
  google::cloud::pubsublite::v1::Subscription response;
  auto status =
      grpc_stub_->CreateSubscription(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::pubsublite::v1::Subscription>
DefaultAdminServiceStub::GetSubscription(
    grpc::ClientContext& client_context,
    google::cloud::pubsublite::v1::GetSubscriptionRequest const& request) {
  google::cloud::pubsublite::v1::Subscription response;
  auto status =
      grpc_stub_->GetSubscription(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::pubsublite::v1::ListSubscriptionsResponse>
DefaultAdminServiceStub::ListSubscriptions(
    grpc::ClientContext& client_context,
    google::cloud::pubsublite::v1::ListSubscriptionsRequest const& request) {
  google::cloud::pubsublite::v1::ListSubscriptionsResponse response;
  auto status =
      grpc_stub_->ListSubscriptions(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::pubsublite::v1::Subscription>
DefaultAdminServiceStub::UpdateSubscription(
    grpc::ClientContext& client_context,
    google::cloud::pubsublite::v1::UpdateSubscriptionRequest const& request) {
  google::cloud::pubsublite::v1::Subscription response;
  auto status =
      grpc_stub_->UpdateSubscription(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

Status DefaultAdminServiceStub::DeleteSubscription(
    grpc::ClientContext& client_context,
    google::cloud::pubsublite::v1::DeleteSubscriptionRequest const& request) {
  google::protobuf::Empty response;
  auto status =
      grpc_stub_->DeleteSubscription(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

future<StatusOr<google::longrunning::Operation>>
DefaultAdminServiceStub::AsyncSeekSubscription(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::pubsublite::v1::SeekSubscriptionRequest const& request) {
  return cq.MakeUnaryRpc(
      [this](
          grpc::ClientContext* context,
          google::cloud::pubsublite::v1::SeekSubscriptionRequest const& request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncSeekSubscription(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::cloud::pubsublite::v1::Reservation>
DefaultAdminServiceStub::CreateReservation(
    grpc::ClientContext& client_context,
    google::cloud::pubsublite::v1::CreateReservationRequest const& request) {
  google::cloud::pubsublite::v1::Reservation response;
  auto status =
      grpc_stub_->CreateReservation(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::pubsublite::v1::Reservation>
DefaultAdminServiceStub::GetReservation(
    grpc::ClientContext& client_context,
    google::cloud::pubsublite::v1::GetReservationRequest const& request) {
  google::cloud::pubsublite::v1::Reservation response;
  auto status = grpc_stub_->GetReservation(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::pubsublite::v1::ListReservationsResponse>
DefaultAdminServiceStub::ListReservations(
    grpc::ClientContext& client_context,
    google::cloud::pubsublite::v1::ListReservationsRequest const& request) {
  google::cloud::pubsublite::v1::ListReservationsResponse response;
  auto status =
      grpc_stub_->ListReservations(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::pubsublite::v1::Reservation>
DefaultAdminServiceStub::UpdateReservation(
    grpc::ClientContext& client_context,
    google::cloud::pubsublite::v1::UpdateReservationRequest const& request) {
  google::cloud::pubsublite::v1::Reservation response;
  auto status =
      grpc_stub_->UpdateReservation(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

Status DefaultAdminServiceStub::DeleteReservation(
    grpc::ClientContext& client_context,
    google::cloud::pubsublite::v1::DeleteReservationRequest const& request) {
  google::protobuf::Empty response;
  auto status =
      grpc_stub_->DeleteReservation(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

StatusOr<google::cloud::pubsublite::v1::ListReservationTopicsResponse>
DefaultAdminServiceStub::ListReservationTopics(
    grpc::ClientContext& client_context,
    google::cloud::pubsublite::v1::ListReservationTopicsRequest const&
        request) {
  google::cloud::pubsublite::v1::ListReservationTopicsResponse response;
  auto status =
      grpc_stub_->ListReservationTopics(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultAdminServiceStub::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::longrunning::GetOperationRequest const& request) {
  return cq.MakeUnaryRpc(
      [this](grpc::ClientContext* context,
             google::longrunning::GetOperationRequest const& request,
             grpc::CompletionQueue* cq) {
        return operations_->AsyncGetOperation(context, request, cq);
      },
      request, std::move(context));
}

future<Status> DefaultAdminServiceStub::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::longrunning::CancelOperationRequest const& request) {
  return cq
      .MakeUnaryRpc(
          [this](grpc::ClientContext* context,
                 google::longrunning::CancelOperationRequest const& request,
                 grpc::CompletionQueue* cq) {
            return operations_->AsyncCancelOperation(context, request, cq);
          },
          request, std::move(context))
      .then([](future<StatusOr<google::protobuf::Empty>> f) {
        return f.get().status();
      });
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace pubsublite_internal
}  // namespace cloud
}  // namespace google
