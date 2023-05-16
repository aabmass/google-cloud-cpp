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
// source: google/spanner/admin/database/v1/spanner_database_admin.proto

#include "google/cloud/spanner/admin/internal/database_admin_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace spanner_admin_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

DatabaseAdminTracingConnection::DatabaseAdminTracingConnection(
    std::shared_ptr<spanner_admin::DatabaseAdminConnection> child)
    : child_(std::move(child)) {}

StreamRange<google::spanner::admin::database::v1::Database>
DatabaseAdminTracingConnection::ListDatabases(
    google::spanner::admin::database::v1::ListDatabasesRequest request) {
  auto span = internal::MakeSpan(
      "spanner_admin::DatabaseAdminConnection::ListDatabases");
  auto scope = opentelemetry::trace::Scope(span);
  auto sr = child_->ListDatabases(std::move(request));
  return internal::MakeTracedStreamRange<
      google::spanner::admin::database::v1::Database>(std::move(span),
                                                      std::move(sr));
}

future<StatusOr<google::spanner::admin::database::v1::Database>>
DatabaseAdminTracingConnection::CreateDatabase(
    google::spanner::admin::database::v1::CreateDatabaseRequest const&
        request) {
  auto span = internal::MakeSpan(
      "spanner_admin::DatabaseAdminConnection::CreateDatabase");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->CreateDatabase(request));
}

StatusOr<google::spanner::admin::database::v1::Database>
DatabaseAdminTracingConnection::GetDatabase(
    google::spanner::admin::database::v1::GetDatabaseRequest const& request) {
  auto span =
      internal::MakeSpan("spanner_admin::DatabaseAdminConnection::GetDatabase");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetDatabase(request));
}

future<StatusOr<google::spanner::admin::database::v1::Database>>
DatabaseAdminTracingConnection::UpdateDatabase(
    google::spanner::admin::database::v1::UpdateDatabaseRequest const&
        request) {
  auto span = internal::MakeSpan(
      "spanner_admin::DatabaseAdminConnection::UpdateDatabase");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->UpdateDatabase(request));
}

future<
    StatusOr<google::spanner::admin::database::v1::UpdateDatabaseDdlMetadata>>
DatabaseAdminTracingConnection::UpdateDatabaseDdl(
    google::spanner::admin::database::v1::UpdateDatabaseDdlRequest const&
        request) {
  auto span = internal::MakeSpan(
      "spanner_admin::DatabaseAdminConnection::UpdateDatabaseDdl");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->UpdateDatabaseDdl(request));
}

Status DatabaseAdminTracingConnection::DropDatabase(
    google::spanner::admin::database::v1::DropDatabaseRequest const& request) {
  auto span = internal::MakeSpan(
      "spanner_admin::DatabaseAdminConnection::DropDatabase");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->DropDatabase(request));
}

StatusOr<google::spanner::admin::database::v1::GetDatabaseDdlResponse>
DatabaseAdminTracingConnection::GetDatabaseDdl(
    google::spanner::admin::database::v1::GetDatabaseDdlRequest const&
        request) {
  auto span = internal::MakeSpan(
      "spanner_admin::DatabaseAdminConnection::GetDatabaseDdl");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetDatabaseDdl(request));
}

StatusOr<google::iam::v1::Policy> DatabaseAdminTracingConnection::SetIamPolicy(
    google::iam::v1::SetIamPolicyRequest const& request) {
  auto span = internal::MakeSpan(
      "spanner_admin::DatabaseAdminConnection::SetIamPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->SetIamPolicy(request));
}

StatusOr<google::iam::v1::Policy> DatabaseAdminTracingConnection::GetIamPolicy(
    google::iam::v1::GetIamPolicyRequest const& request) {
  auto span = internal::MakeSpan(
      "spanner_admin::DatabaseAdminConnection::GetIamPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetIamPolicy(request));
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
DatabaseAdminTracingConnection::TestIamPermissions(
    google::iam::v1::TestIamPermissionsRequest const& request) {
  auto span = internal::MakeSpan(
      "spanner_admin::DatabaseAdminConnection::TestIamPermissions");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->TestIamPermissions(request));
}

future<StatusOr<google::spanner::admin::database::v1::Backup>>
DatabaseAdminTracingConnection::CreateBackup(
    google::spanner::admin::database::v1::CreateBackupRequest const& request) {
  auto span = internal::MakeSpan(
      "spanner_admin::DatabaseAdminConnection::CreateBackup");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->CreateBackup(request));
}

future<StatusOr<google::spanner::admin::database::v1::Backup>>
DatabaseAdminTracingConnection::CopyBackup(
    google::spanner::admin::database::v1::CopyBackupRequest const& request) {
  auto span =
      internal::MakeSpan("spanner_admin::DatabaseAdminConnection::CopyBackup");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->CopyBackup(request));
}

StatusOr<google::spanner::admin::database::v1::Backup>
DatabaseAdminTracingConnection::GetBackup(
    google::spanner::admin::database::v1::GetBackupRequest const& request) {
  auto span =
      internal::MakeSpan("spanner_admin::DatabaseAdminConnection::GetBackup");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetBackup(request));
}

StatusOr<google::spanner::admin::database::v1::Backup>
DatabaseAdminTracingConnection::UpdateBackup(
    google::spanner::admin::database::v1::UpdateBackupRequest const& request) {
  auto span = internal::MakeSpan(
      "spanner_admin::DatabaseAdminConnection::UpdateBackup");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->UpdateBackup(request));
}

Status DatabaseAdminTracingConnection::DeleteBackup(
    google::spanner::admin::database::v1::DeleteBackupRequest const& request) {
  auto span = internal::MakeSpan(
      "spanner_admin::DatabaseAdminConnection::DeleteBackup");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->DeleteBackup(request));
}

StreamRange<google::spanner::admin::database::v1::Backup>
DatabaseAdminTracingConnection::ListBackups(
    google::spanner::admin::database::v1::ListBackupsRequest request) {
  auto span =
      internal::MakeSpan("spanner_admin::DatabaseAdminConnection::ListBackups");
  auto scope = opentelemetry::trace::Scope(span);
  auto sr = child_->ListBackups(std::move(request));
  return internal::MakeTracedStreamRange<
      google::spanner::admin::database::v1::Backup>(std::move(span),
                                                    std::move(sr));
}

future<StatusOr<google::spanner::admin::database::v1::Database>>
DatabaseAdminTracingConnection::RestoreDatabase(
    google::spanner::admin::database::v1::RestoreDatabaseRequest const&
        request) {
  auto span = internal::MakeSpan(
      "spanner_admin::DatabaseAdminConnection::RestoreDatabase");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->RestoreDatabase(request));
}

StreamRange<google::longrunning::Operation>
DatabaseAdminTracingConnection::ListDatabaseOperations(
    google::spanner::admin::database::v1::ListDatabaseOperationsRequest
        request) {
  auto span = internal::MakeSpan(
      "spanner_admin::DatabaseAdminConnection::ListDatabaseOperations");
  auto scope = opentelemetry::trace::Scope(span);
  auto sr = child_->ListDatabaseOperations(std::move(request));
  return internal::MakeTracedStreamRange<google::longrunning::Operation>(
      std::move(span), std::move(sr));
}

StreamRange<google::longrunning::Operation>
DatabaseAdminTracingConnection::ListBackupOperations(
    google::spanner::admin::database::v1::ListBackupOperationsRequest request) {
  auto span = internal::MakeSpan(
      "spanner_admin::DatabaseAdminConnection::ListBackupOperations");
  auto scope = opentelemetry::trace::Scope(span);
  auto sr = child_->ListBackupOperations(std::move(request));
  return internal::MakeTracedStreamRange<google::longrunning::Operation>(
      std::move(span), std::move(sr));
}

StreamRange<google::spanner::admin::database::v1::DatabaseRole>
DatabaseAdminTracingConnection::ListDatabaseRoles(
    google::spanner::admin::database::v1::ListDatabaseRolesRequest request) {
  auto span = internal::MakeSpan(
      "spanner_admin::DatabaseAdminConnection::ListDatabaseRoles");
  auto scope = opentelemetry::trace::Scope(span);
  auto sr = child_->ListDatabaseRoles(std::move(request));
  return internal::MakeTracedStreamRange<
      google::spanner::admin::database::v1::DatabaseRole>(std::move(span),
                                                          std::move(sr));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<spanner_admin::DatabaseAdminConnection>
MakeDatabaseAdminTracingConnection(
    std::shared_ptr<spanner_admin::DatabaseAdminConnection> conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<DatabaseAdminTracingConnection>(std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace spanner_admin_internal
}  // namespace cloud
}  // namespace google
