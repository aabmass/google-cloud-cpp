# Copyright 2019 Google LLC
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     https://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#
# DO NOT EDIT -- GENERATED BY CMake -- Change the CMakeLists.txt file if needed

"""Automatically generated source lists for google_cloud_cpp_spanner - DO NOT EDIT."""

google_cloud_cpp_spanner_hdrs = [
    "admin/database_admin_client.h",
    "admin/database_admin_connection.h",
    "admin/database_admin_connection_idempotency_policy.h",
    "admin/database_admin_options.h",
    "admin/instance_admin_client.h",
    "admin/instance_admin_connection.h",
    "admin/instance_admin_connection_idempotency_policy.h",
    "admin/instance_admin_options.h",
    "admin/internal/database_admin_auth_decorator.h",
    "admin/internal/database_admin_connection_impl.h",
    "admin/internal/database_admin_logging_decorator.h",
    "admin/internal/database_admin_metadata_decorator.h",
    "admin/internal/database_admin_option_defaults.h",
    "admin/internal/database_admin_retry_traits.h",
    "admin/internal/database_admin_stub.h",
    "admin/internal/database_admin_stub_factory.h",
    "admin/internal/database_admin_tracing_connection.h",
    "admin/internal/database_admin_tracing_stub.h",
    "admin/internal/instance_admin_auth_decorator.h",
    "admin/internal/instance_admin_connection_impl.h",
    "admin/internal/instance_admin_logging_decorator.h",
    "admin/internal/instance_admin_metadata_decorator.h",
    "admin/internal/instance_admin_option_defaults.h",
    "admin/internal/instance_admin_retry_traits.h",
    "admin/internal/instance_admin_stub.h",
    "admin/internal/instance_admin_stub_factory.h",
    "admin/internal/instance_admin_tracing_connection.h",
    "admin/internal/instance_admin_tracing_stub.h",
    "admin/retry_traits.h",
    "backoff_policy.h",
    "backup.h",
    "batch_dml_result.h",
    "bytes.h",
    "client.h",
    "client_options.h",
    "commit_options.h",
    "commit_result.h",
    "connection.h",
    "connection_options.h",
    "create_instance_request_builder.h",
    "database.h",
    "database_admin_client.h",
    "database_admin_connection.h",
    "date.h",
    "directed_read_replicas.h",
    "encryption_config.h",
    "iam_updater.h",
    "instance.h",
    "instance_admin_client.h",
    "instance_admin_connection.h",
    "internal/channel.h",
    "internal/connection_impl.h",
    "internal/database_admin_logging.h",
    "internal/database_admin_metadata.h",
    "internal/database_admin_stub.h",
    "internal/defaults.h",
    "internal/instance_admin_logging.h",
    "internal/instance_admin_metadata.h",
    "internal/instance_admin_stub.h",
    "internal/logging_result_set_reader.h",
    "internal/merge_chunk.h",
    "internal/partial_result_set_reader.h",
    "internal/partial_result_set_resume.h",
    "internal/partial_result_set_source.h",
    "internal/route_to_leader.h",
    "internal/session.h",
    "internal/session_pool.h",
    "internal/spanner_auth_decorator.h",
    "internal/spanner_logging_decorator.h",
    "internal/spanner_metadata_decorator.h",
    "internal/spanner_stub.h",
    "internal/spanner_stub_factory.h",
    "internal/spanner_tracing_stub.h",
    "internal/status_utils.h",
    "internal/transaction_impl.h",
    "internal/tuple_utils.h",
    "json.h",
    "keys.h",
    "mutations.h",
    "numeric.h",
    "options.h",
    "partition_options.h",
    "partitioned_dml_result.h",
    "polling_policy.h",
    "query_options.h",
    "query_partition.h",
    "read_options.h",
    "read_partition.h",
    "request_priority.h",
    "results.h",
    "retry_policy.h",
    "row.h",
    "session_pool_options.h",
    "sql_statement.h",
    "timestamp.h",
    "tracing_options.h",
    "transaction.h",
    "update_instance_request_builder.h",
    "value.h",
    "version.h",
    "version_info.h",
]

google_cloud_cpp_spanner_srcs = [
    "admin/database_admin_client.cc",
    "admin/database_admin_connection.cc",
    "admin/database_admin_connection_idempotency_policy.cc",
    "admin/instance_admin_client.cc",
    "admin/instance_admin_connection.cc",
    "admin/instance_admin_connection_idempotency_policy.cc",
    "admin/internal/database_admin_auth_decorator.cc",
    "admin/internal/database_admin_connection_impl.cc",
    "admin/internal/database_admin_logging_decorator.cc",
    "admin/internal/database_admin_metadata_decorator.cc",
    "admin/internal/database_admin_option_defaults.cc",
    "admin/internal/database_admin_stub.cc",
    "admin/internal/database_admin_stub_factory.cc",
    "admin/internal/database_admin_tracing_connection.cc",
    "admin/internal/database_admin_tracing_stub.cc",
    "admin/internal/instance_admin_auth_decorator.cc",
    "admin/internal/instance_admin_connection_impl.cc",
    "admin/internal/instance_admin_logging_decorator.cc",
    "admin/internal/instance_admin_metadata_decorator.cc",
    "admin/internal/instance_admin_option_defaults.cc",
    "admin/internal/instance_admin_stub.cc",
    "admin/internal/instance_admin_stub_factory.cc",
    "admin/internal/instance_admin_tracing_connection.cc",
    "admin/internal/instance_admin_tracing_stub.cc",
    "backup.cc",
    "bytes.cc",
    "client.cc",
    "commit_options.cc",
    "connection.cc",
    "connection_options.cc",
    "database.cc",
    "database_admin_client.cc",
    "database_admin_connection.cc",
    "instance.cc",
    "instance_admin_client.cc",
    "instance_admin_connection.cc",
    "internal/connection_impl.cc",
    "internal/database_admin_logging.cc",
    "internal/database_admin_metadata.cc",
    "internal/database_admin_stub.cc",
    "internal/defaults.cc",
    "internal/instance_admin_logging.cc",
    "internal/instance_admin_metadata.cc",
    "internal/instance_admin_stub.cc",
    "internal/logging_result_set_reader.cc",
    "internal/merge_chunk.cc",
    "internal/partial_result_set_resume.cc",
    "internal/partial_result_set_source.cc",
    "internal/route_to_leader.cc",
    "internal/session.cc",
    "internal/session_pool.cc",
    "internal/spanner_auth_decorator.cc",
    "internal/spanner_logging_decorator.cc",
    "internal/spanner_metadata_decorator.cc",
    "internal/spanner_stub.cc",
    "internal/spanner_stub_factory.cc",
    "internal/spanner_tracing_stub.cc",
    "internal/status_utils.cc",
    "internal/transaction_impl.cc",
    "keys.cc",
    "mutations.cc",
    "numeric.cc",
    "partition_options.cc",
    "query_options.cc",
    "query_partition.cc",
    "read_options.cc",
    "read_partition.cc",
    "results.cc",
    "row.cc",
    "sql_statement.cc",
    "timestamp.cc",
    "transaction.cc",
    "value.cc",
    "version.cc",
]
