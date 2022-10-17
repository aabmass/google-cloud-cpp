// Copyright 2021 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "google/cloud/pubsub/internal/publisher_auth.h"
#include "google/cloud/internal/log_wrapper.h"

namespace google {
namespace cloud {
namespace pubsub_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

StatusOr<google::pubsub::v1::Topic> PublisherAuth::CreateTopic(
    grpc::ClientContext& context, google::pubsub::v1::Topic const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateTopic(context, request);
}

StatusOr<google::pubsub::v1::Topic> PublisherAuth::GetTopic(
    grpc::ClientContext& context,
    google::pubsub::v1::GetTopicRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetTopic(context, request);
}

StatusOr<google::pubsub::v1::Topic> PublisherAuth::UpdateTopic(
    grpc::ClientContext& context,
    google::pubsub::v1::UpdateTopicRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpdateTopic(context, request);
}

StatusOr<google::pubsub::v1::ListTopicsResponse> PublisherAuth::ListTopics(
    grpc::ClientContext& context,
    google::pubsub::v1::ListTopicsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListTopics(context, request);
}

Status PublisherAuth::DeleteTopic(
    grpc::ClientContext& context,
    google::pubsub::v1::DeleteTopicRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteTopic(context, request);
}

StatusOr<google::pubsub::v1::DetachSubscriptionResponse>
PublisherAuth::DetachSubscription(
    grpc::ClientContext& context,
    google::pubsub::v1::DetachSubscriptionRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DetachSubscription(context, request);
}

StatusOr<google::pubsub::v1::ListTopicSubscriptionsResponse>
PublisherAuth::ListTopicSubscriptions(
    grpc::ClientContext& context,
    google::pubsub::v1::ListTopicSubscriptionsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListTopicSubscriptions(context, request);
}

StatusOr<google::pubsub::v1::ListTopicSnapshotsResponse>
PublisherAuth::ListTopicSnapshots(
    grpc::ClientContext& context,
    google::pubsub::v1::ListTopicSnapshotsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListTopicSnapshots(context, request);
}

future<StatusOr<google::pubsub::v1::PublishResponse>>
PublisherAuth::AsyncPublish(google::cloud::CompletionQueue& cq,
                            std::unique_ptr<grpc::ClientContext> context,
                            google::pubsub::v1::PublishRequest const& request) {
  using ReturnType = StatusOr<google::pubsub::v1::PublishResponse>;
  auto& child = child_;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child,
             request](future<StatusOr<std::unique_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncPublish(cq, *std::move(context), request);
      });
}

StatusOr<google::pubsub::v1::PublishResponse> PublisherAuth::Publish(
    grpc::ClientContext& context,
    google::pubsub::v1::PublishRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->Publish(context, request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace pubsub_internal
}  // namespace cloud
}  // namespace google
