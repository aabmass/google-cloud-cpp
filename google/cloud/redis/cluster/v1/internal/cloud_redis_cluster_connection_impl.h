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
// source: google/cloud/redis/cluster/v1/cloud_redis_cluster.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_REDIS_CLUSTER_V1_INTERNAL_CLOUD_REDIS_CLUSTER_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_REDIS_CLUSTER_V1_INTERNAL_CLOUD_REDIS_CLUSTER_CONNECTION_IMPL_H

#include "google/cloud/redis/cluster/v1/cloud_redis_cluster_connection.h"
#include "google/cloud/redis/cluster/v1/cloud_redis_cluster_connection_idempotency_policy.h"
#include "google/cloud/redis/cluster/v1/cloud_redis_cluster_options.h"
#include "google/cloud/redis/cluster/v1/internal/cloud_redis_cluster_retry_traits.h"
#include "google/cloud/redis/cluster/v1/internal/cloud_redis_cluster_stub.h"
#include "google/cloud/background_threads.h"
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
namespace redis_cluster_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class CloudRedisClusterConnectionImpl
    : public redis_cluster_v1::CloudRedisClusterConnection {
 public:
  ~CloudRedisClusterConnectionImpl() override = default;

  CloudRedisClusterConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<redis_cluster_v1_internal::CloudRedisClusterStub> stub,
      Options options);

  Options options() override { return options_; }

  StreamRange<google::cloud::redis::cluster::v1::Cluster> ListClusters(
      google::cloud::redis::cluster::v1::ListClustersRequest request) override;

  StatusOr<google::cloud::redis::cluster::v1::Cluster> GetCluster(
      google::cloud::redis::cluster::v1::GetClusterRequest const& request)
      override;

  future<StatusOr<google::cloud::redis::cluster::v1::Cluster>> UpdateCluster(
      google::cloud::redis::cluster::v1::UpdateClusterRequest const& request)
      override;

  future<StatusOr<google::protobuf::Any>> DeleteCluster(
      google::cloud::redis::cluster::v1::DeleteClusterRequest const& request)
      override;

  future<StatusOr<google::cloud::redis::cluster::v1::Cluster>> CreateCluster(
      google::cloud::redis::cluster::v1::CreateClusterRequest const& request)
      override;

 private:
  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<redis_cluster_v1_internal::CloudRedisClusterStub> stub_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace redis_cluster_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_REDIS_CLUSTER_V1_INTERNAL_CLOUD_REDIS_CLUSTER_CONNECTION_IMPL_H
