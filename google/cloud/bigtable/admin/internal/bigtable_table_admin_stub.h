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
// source: google/bigtable/admin/v2/bigtable_table_admin.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGTABLE_ADMIN_INTERNAL_BIGTABLE_TABLE_ADMIN_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGTABLE_ADMIN_INTERNAL_BIGTABLE_TABLE_ADMIN_STUB_H

#include "google/cloud/completion_queue.h"
#include "google/cloud/future.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/bigtable/admin/v2/bigtable_table_admin.grpc.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace bigtable_admin_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class BigtableTableAdminStub {
 public:
  virtual ~BigtableTableAdminStub() = 0;

  virtual StatusOr<google::bigtable::admin::v2::Table> CreateTable(
      grpc::ClientContext& context,
      google::bigtable::admin::v2::CreateTableRequest const& request) = 0;

  virtual StatusOr<google::bigtable::admin::v2::ListTablesResponse> ListTables(
      grpc::ClientContext& context,
      google::bigtable::admin::v2::ListTablesRequest const& request) = 0;

  virtual StatusOr<google::bigtable::admin::v2::Table> GetTable(
      grpc::ClientContext& context,
      google::bigtable::admin::v2::GetTableRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncUpdateTable(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::bigtable::admin::v2::UpdateTableRequest const& request) = 0;

  virtual Status DeleteTable(
      grpc::ClientContext& context,
      google::bigtable::admin::v2::DeleteTableRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncUndeleteTable(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::bigtable::admin::v2::UndeleteTableRequest const& request) = 0;

  virtual StatusOr<google::bigtable::admin::v2::Table> ModifyColumnFamilies(
      grpc::ClientContext& context,
      google::bigtable::admin::v2::ModifyColumnFamiliesRequest const&
          request) = 0;

  virtual Status DropRowRange(
      grpc::ClientContext& context,
      google::bigtable::admin::v2::DropRowRangeRequest const& request) = 0;

  virtual StatusOr<
      google::bigtable::admin::v2::GenerateConsistencyTokenResponse>
  GenerateConsistencyToken(
      grpc::ClientContext& context,
      google::bigtable::admin::v2::GenerateConsistencyTokenRequest const&
          request) = 0;

  virtual StatusOr<google::bigtable::admin::v2::CheckConsistencyResponse>
  CheckConsistency(
      grpc::ClientContext& context,
      google::bigtable::admin::v2::CheckConsistencyRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncCreateBackup(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::bigtable::admin::v2::CreateBackupRequest const& request) = 0;

  virtual StatusOr<google::bigtable::admin::v2::Backup> GetBackup(
      grpc::ClientContext& context,
      google::bigtable::admin::v2::GetBackupRequest const& request) = 0;

  virtual StatusOr<google::bigtable::admin::v2::Backup> UpdateBackup(
      grpc::ClientContext& context,
      google::bigtable::admin::v2::UpdateBackupRequest const& request) = 0;

  virtual Status DeleteBackup(
      grpc::ClientContext& context,
      google::bigtable::admin::v2::DeleteBackupRequest const& request) = 0;

  virtual StatusOr<google::bigtable::admin::v2::ListBackupsResponse>
  ListBackups(
      grpc::ClientContext& context,
      google::bigtable::admin::v2::ListBackupsRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncRestoreTable(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::bigtable::admin::v2::RestoreTableRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncCopyBackup(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::bigtable::admin::v2::CopyBackupRequest const& request) = 0;

  virtual StatusOr<google::iam::v1::Policy> GetIamPolicy(
      grpc::ClientContext& context,
      google::iam::v1::GetIamPolicyRequest const& request) = 0;

  virtual StatusOr<google::iam::v1::Policy> SetIamPolicy(
      grpc::ClientContext& context,
      google::iam::v1::SetIamPolicyRequest const& request) = 0;

  virtual StatusOr<google::iam::v1::TestIamPermissionsResponse>
  TestIamPermissions(
      grpc::ClientContext& context,
      google::iam::v1::TestIamPermissionsRequest const& request) = 0;

  virtual future<
      StatusOr<google::bigtable::admin::v2::CheckConsistencyResponse>>
  AsyncCheckConsistency(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::bigtable::admin::v2::CheckConsistencyRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::longrunning::GetOperationRequest const& request) = 0;

  virtual future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::longrunning::CancelOperationRequest const& request) = 0;
};

class DefaultBigtableTableAdminStub : public BigtableTableAdminStub {
 public:
  DefaultBigtableTableAdminStub(
      std::unique_ptr<
          google::bigtable::admin::v2::BigtableTableAdmin::StubInterface>
          grpc_stub,
      std::unique_ptr<google::longrunning::Operations::StubInterface>
          operations)
      : grpc_stub_(std::move(grpc_stub)), operations_(std::move(operations)) {}

  StatusOr<google::bigtable::admin::v2::Table> CreateTable(
      grpc::ClientContext& client_context,
      google::bigtable::admin::v2::CreateTableRequest const& request) override;

  StatusOr<google::bigtable::admin::v2::ListTablesResponse> ListTables(
      grpc::ClientContext& client_context,
      google::bigtable::admin::v2::ListTablesRequest const& request) override;

  StatusOr<google::bigtable::admin::v2::Table> GetTable(
      grpc::ClientContext& client_context,
      google::bigtable::admin::v2::GetTableRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateTable(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::bigtable::admin::v2::UpdateTableRequest const& request) override;

  Status DeleteTable(
      grpc::ClientContext& client_context,
      google::bigtable::admin::v2::DeleteTableRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncUndeleteTable(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::bigtable::admin::v2::UndeleteTableRequest const& request)
      override;

  StatusOr<google::bigtable::admin::v2::Table> ModifyColumnFamilies(
      grpc::ClientContext& client_context,
      google::bigtable::admin::v2::ModifyColumnFamiliesRequest const& request)
      override;

  Status DropRowRange(
      grpc::ClientContext& client_context,
      google::bigtable::admin::v2::DropRowRangeRequest const& request) override;

  StatusOr<google::bigtable::admin::v2::GenerateConsistencyTokenResponse>
  GenerateConsistencyToken(
      grpc::ClientContext& client_context,
      google::bigtable::admin::v2::GenerateConsistencyTokenRequest const&
          request) override;

  StatusOr<google::bigtable::admin::v2::CheckConsistencyResponse>
  CheckConsistency(grpc::ClientContext& client_context,
                   google::bigtable::admin::v2::CheckConsistencyRequest const&
                       request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateBackup(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::bigtable::admin::v2::CreateBackupRequest const& request) override;

  StatusOr<google::bigtable::admin::v2::Backup> GetBackup(
      grpc::ClientContext& client_context,
      google::bigtable::admin::v2::GetBackupRequest const& request) override;

  StatusOr<google::bigtable::admin::v2::Backup> UpdateBackup(
      grpc::ClientContext& client_context,
      google::bigtable::admin::v2::UpdateBackupRequest const& request) override;

  Status DeleteBackup(
      grpc::ClientContext& client_context,
      google::bigtable::admin::v2::DeleteBackupRequest const& request) override;

  StatusOr<google::bigtable::admin::v2::ListBackupsResponse> ListBackups(
      grpc::ClientContext& client_context,
      google::bigtable::admin::v2::ListBackupsRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncRestoreTable(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::bigtable::admin::v2::RestoreTableRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncCopyBackup(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::bigtable::admin::v2::CopyBackupRequest const& request) override;

  StatusOr<google::iam::v1::Policy> GetIamPolicy(
      grpc::ClientContext& client_context,
      google::iam::v1::GetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::Policy> SetIamPolicy(
      grpc::ClientContext& client_context,
      google::iam::v1::SetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::TestIamPermissionsResponse> TestIamPermissions(
      grpc::ClientContext& client_context,
      google::iam::v1::TestIamPermissionsRequest const& request) override;

  future<StatusOr<google::bigtable::admin::v2::CheckConsistencyResponse>>
  AsyncCheckConsistency(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::bigtable::admin::v2::CheckConsistencyRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::longrunning::GetOperationRequest const& request) override;

  future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::longrunning::CancelOperationRequest const& request) override;

 private:
  std::unique_ptr<
      google::bigtable::admin::v2::BigtableTableAdmin::StubInterface>
      grpc_stub_;
  std::unique_ptr<google::longrunning::Operations::StubInterface> operations_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace bigtable_admin_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGTABLE_ADMIN_INTERNAL_BIGTABLE_TABLE_ADMIN_STUB_H
