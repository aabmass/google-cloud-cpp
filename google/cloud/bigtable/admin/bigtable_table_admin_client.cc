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

#include "google/cloud/bigtable/admin/bigtable_table_admin_client.h"
#include "google/cloud/bigtable/admin/bigtable_table_admin_options.h"
#include <memory>
#include <thread>

namespace google {
namespace cloud {
namespace bigtable_admin {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

BigtableTableAdminClient::BigtableTableAdminClient(
    std::shared_ptr<BigtableTableAdminConnection> connection, Options opts)
    : connection_(std::move(connection)),
      options_(
          internal::MergeOptions(std::move(opts), connection_->options())) {}
BigtableTableAdminClient::~BigtableTableAdminClient() = default;

StatusOr<google::bigtable::admin::v2::Table>
BigtableTableAdminClient::CreateTable(
    std::string const& parent, std::string const& table_id,
    google::bigtable::admin::v2::Table const& table, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::bigtable::admin::v2::CreateTableRequest request;
  request.set_parent(parent);
  request.set_table_id(table_id);
  *request.mutable_table() = table;
  return connection_->CreateTable(request);
}

StatusOr<google::bigtable::admin::v2::Table>
BigtableTableAdminClient::CreateTable(
    google::bigtable::admin::v2::CreateTableRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateTable(request);
}

StreamRange<google::bigtable::admin::v2::Table>
BigtableTableAdminClient::ListTables(std::string const& parent, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::bigtable::admin::v2::ListTablesRequest request;
  request.set_parent(parent);
  return connection_->ListTables(request);
}

StreamRange<google::bigtable::admin::v2::Table>
BigtableTableAdminClient::ListTables(
    google::bigtable::admin::v2::ListTablesRequest request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListTables(std::move(request));
}

StatusOr<google::bigtable::admin::v2::Table> BigtableTableAdminClient::GetTable(
    std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::bigtable::admin::v2::GetTableRequest request;
  request.set_name(name);
  return connection_->GetTable(request);
}

StatusOr<google::bigtable::admin::v2::Table> BigtableTableAdminClient::GetTable(
    google::bigtable::admin::v2::GetTableRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetTable(request);
}

future<StatusOr<google::bigtable::admin::v2::Table>>
BigtableTableAdminClient::UpdateTable(
    google::bigtable::admin::v2::Table const& table,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::bigtable::admin::v2::UpdateTableRequest request;
  *request.mutable_table() = table;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateTable(request);
}

future<StatusOr<google::bigtable::admin::v2::Table>>
BigtableTableAdminClient::UpdateTable(
    google::bigtable::admin::v2::UpdateTableRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateTable(request);
}

Status BigtableTableAdminClient::DeleteTable(std::string const& name,
                                             Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::bigtable::admin::v2::DeleteTableRequest request;
  request.set_name(name);
  return connection_->DeleteTable(request);
}

Status BigtableTableAdminClient::DeleteTable(
    google::bigtable::admin::v2::DeleteTableRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteTable(request);
}

future<StatusOr<google::bigtable::admin::v2::Table>>
BigtableTableAdminClient::UndeleteTable(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::bigtable::admin::v2::UndeleteTableRequest request;
  request.set_name(name);
  return connection_->UndeleteTable(request);
}

future<StatusOr<google::bigtable::admin::v2::Table>>
BigtableTableAdminClient::UndeleteTable(
    google::bigtable::admin::v2::UndeleteTableRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UndeleteTable(request);
}

StatusOr<google::bigtable::admin::v2::Table>
BigtableTableAdminClient::ModifyColumnFamilies(
    std::string const& name,
    std::vector<google::bigtable::admin::v2::ModifyColumnFamiliesRequest::
                    Modification> const& modifications,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::bigtable::admin::v2::ModifyColumnFamiliesRequest request;
  request.set_name(name);
  *request.mutable_modifications() = {modifications.begin(),
                                      modifications.end()};
  return connection_->ModifyColumnFamilies(request);
}

StatusOr<google::bigtable::admin::v2::Table>
BigtableTableAdminClient::ModifyColumnFamilies(
    google::bigtable::admin::v2::ModifyColumnFamiliesRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ModifyColumnFamilies(request);
}

Status BigtableTableAdminClient::DropRowRange(
    google::bigtable::admin::v2::DropRowRangeRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DropRowRange(request);
}

StatusOr<google::bigtable::admin::v2::GenerateConsistencyTokenResponse>
BigtableTableAdminClient::GenerateConsistencyToken(std::string const& name,
                                                   Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::bigtable::admin::v2::GenerateConsistencyTokenRequest request;
  request.set_name(name);
  return connection_->GenerateConsistencyToken(request);
}

StatusOr<google::bigtable::admin::v2::GenerateConsistencyTokenResponse>
BigtableTableAdminClient::GenerateConsistencyToken(
    google::bigtable::admin::v2::GenerateConsistencyTokenRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GenerateConsistencyToken(request);
}

StatusOr<google::bigtable::admin::v2::CheckConsistencyResponse>
BigtableTableAdminClient::CheckConsistency(std::string const& name,
                                           std::string const& consistency_token,
                                           Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::bigtable::admin::v2::CheckConsistencyRequest request;
  request.set_name(name);
  request.set_consistency_token(consistency_token);
  return connection_->CheckConsistency(request);
}

StatusOr<google::bigtable::admin::v2::CheckConsistencyResponse>
BigtableTableAdminClient::CheckConsistency(
    google::bigtable::admin::v2::CheckConsistencyRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CheckConsistency(request);
}

future<StatusOr<google::bigtable::admin::v2::Backup>>
BigtableTableAdminClient::CreateBackup(
    std::string const& parent, std::string const& backup_id,
    google::bigtable::admin::v2::Backup const& backup, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::bigtable::admin::v2::CreateBackupRequest request;
  request.set_parent(parent);
  request.set_backup_id(backup_id);
  *request.mutable_backup() = backup;
  return connection_->CreateBackup(request);
}

future<StatusOr<google::bigtable::admin::v2::Backup>>
BigtableTableAdminClient::CreateBackup(
    google::bigtable::admin::v2::CreateBackupRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateBackup(request);
}

StatusOr<google::bigtable::admin::v2::Backup>
BigtableTableAdminClient::GetBackup(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::bigtable::admin::v2::GetBackupRequest request;
  request.set_name(name);
  return connection_->GetBackup(request);
}

StatusOr<google::bigtable::admin::v2::Backup>
BigtableTableAdminClient::GetBackup(
    google::bigtable::admin::v2::GetBackupRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetBackup(request);
}

StatusOr<google::bigtable::admin::v2::Backup>
BigtableTableAdminClient::UpdateBackup(
    google::bigtable::admin::v2::Backup const& backup,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::bigtable::admin::v2::UpdateBackupRequest request;
  *request.mutable_backup() = backup;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateBackup(request);
}

StatusOr<google::bigtable::admin::v2::Backup>
BigtableTableAdminClient::UpdateBackup(
    google::bigtable::admin::v2::UpdateBackupRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateBackup(request);
}

Status BigtableTableAdminClient::DeleteBackup(std::string const& name,
                                              Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::bigtable::admin::v2::DeleteBackupRequest request;
  request.set_name(name);
  return connection_->DeleteBackup(request);
}

Status BigtableTableAdminClient::DeleteBackup(
    google::bigtable::admin::v2::DeleteBackupRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteBackup(request);
}

StreamRange<google::bigtable::admin::v2::Backup>
BigtableTableAdminClient::ListBackups(std::string const& parent, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::bigtable::admin::v2::ListBackupsRequest request;
  request.set_parent(parent);
  return connection_->ListBackups(request);
}

StreamRange<google::bigtable::admin::v2::Backup>
BigtableTableAdminClient::ListBackups(
    google::bigtable::admin::v2::ListBackupsRequest request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListBackups(std::move(request));
}

future<StatusOr<google::bigtable::admin::v2::Table>>
BigtableTableAdminClient::RestoreTable(
    google::bigtable::admin::v2::RestoreTableRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->RestoreTable(request);
}

future<StatusOr<google::bigtable::admin::v2::Backup>>
BigtableTableAdminClient::CopyBackup(
    std::string const& parent, std::string const& backup_id,
    std::string const& source_backup,
    google::protobuf::Timestamp const& expire_time, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::bigtable::admin::v2::CopyBackupRequest request;
  request.set_parent(parent);
  request.set_backup_id(backup_id);
  request.set_source_backup(source_backup);
  *request.mutable_expire_time() = expire_time;
  return connection_->CopyBackup(request);
}

future<StatusOr<google::bigtable::admin::v2::Backup>>
BigtableTableAdminClient::CopyBackup(
    google::bigtable::admin::v2::CopyBackupRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CopyBackup(request);
}

StatusOr<google::iam::v1::Policy> BigtableTableAdminClient::GetIamPolicy(
    std::string const& resource, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::iam::v1::GetIamPolicyRequest request;
  request.set_resource(resource);
  return connection_->GetIamPolicy(request);
}

StatusOr<google::iam::v1::Policy> BigtableTableAdminClient::GetIamPolicy(
    google::iam::v1::GetIamPolicyRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetIamPolicy(request);
}

StatusOr<google::iam::v1::Policy> BigtableTableAdminClient::SetIamPolicy(
    std::string const& resource, google::iam::v1::Policy const& policy,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::iam::v1::SetIamPolicyRequest request;
  request.set_resource(resource);
  *request.mutable_policy() = policy;
  return connection_->SetIamPolicy(request);
}

StatusOr<google::iam::v1::Policy> BigtableTableAdminClient::SetIamPolicy(
    std::string const& resource, IamUpdater const& updater, Options opts) {
  internal::CheckExpectedOptions<BigtableTableAdminBackoffPolicyOption>(
      opts, __func__);
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::iam::v1::GetIamPolicyRequest get_request;
  get_request.set_resource(resource);
  google::iam::v1::SetIamPolicyRequest set_request;
  set_request.set_resource(resource);
  auto backoff_policy =
      internal::CurrentOptions().get<BigtableTableAdminBackoffPolicyOption>();
  if (backoff_policy != nullptr) {
    backoff_policy = backoff_policy->clone();
  }
  for (;;) {
    auto recent = connection_->GetIamPolicy(get_request);
    if (!recent) {
      return recent.status();
    }
    auto policy = updater(*std::move(recent));
    if (!policy) {
      return Status(StatusCode::kCancelled, "updater did not yield a policy");
    }
    *set_request.mutable_policy() = *std::move(policy);
    auto result = connection_->SetIamPolicy(set_request);
    if (result || result.status().code() != StatusCode::kAborted ||
        backoff_policy == nullptr) {
      return result;
    }
    std::this_thread::sleep_for(backoff_policy->OnCompletion());
  }
}

StatusOr<google::iam::v1::Policy> BigtableTableAdminClient::SetIamPolicy(
    google::iam::v1::SetIamPolicyRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->SetIamPolicy(request);
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
BigtableTableAdminClient::TestIamPermissions(
    std::string const& resource, std::vector<std::string> const& permissions,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::iam::v1::TestIamPermissionsRequest request;
  request.set_resource(resource);
  *request.mutable_permissions() = {permissions.begin(), permissions.end()};
  return connection_->TestIamPermissions(request);
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
BigtableTableAdminClient::TestIamPermissions(
    google::iam::v1::TestIamPermissionsRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->TestIamPermissions(request);
}

future<StatusOr<google::bigtable::admin::v2::CheckConsistencyResponse>>
BigtableTableAdminClient::AsyncCheckConsistency(
    std::string const& name, std::string const& consistency_token,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::bigtable::admin::v2::CheckConsistencyRequest request;
  request.set_name(name);
  request.set_consistency_token(consistency_token);
  return connection_->AsyncCheckConsistency(request);
}

future<StatusOr<google::bigtable::admin::v2::CheckConsistencyResponse>>
BigtableTableAdminClient::AsyncCheckConsistency(
    google::bigtable::admin::v2::CheckConsistencyRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->AsyncCheckConsistency(request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace bigtable_admin
}  // namespace cloud
}  // namespace google
