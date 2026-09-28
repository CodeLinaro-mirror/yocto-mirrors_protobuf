load("@rules_testing//lib:util.bzl", "PREVENT_IMPLICIT_BUILDING_TAGS")
load("//bazel:cc_proto_library.bzl", "cc_proto_library")
load("//bazel:proto_library.bzl", "proto_library")
load("//bazel/tests:proto_bzl_test_suite.bzl", "bzl_test_suite")
load("//bazel/tests/cc_proto_library_tests:test_utils.bzl", "CC_PROTO_TESTING_ASPECT")
load(":tests.bzl", "TESTS")

package(default_applicable_licenses = ["//:license"])

proto_library(
    name = "foo_proto",
    srcs = ["foo.proto"],
    tags = PREVENT_IMPLICIT_BUILDING_TAGS,
)

cc_proto_library(
    name = "foo_cc_proto",
    tags = PREVENT_IMPLICIT_BUILDING_TAGS,
    deps = [":foo_proto"],
)

bzl_test_suite(
    name = "test_generated_sources_not_coverage_instrumented",
    config_settings = {
        "//command_line_option:collect_code_coverage": True,
        "//command_line_option:instrumentation_filter": ".",
    },
    testing_aspect = CC_PROTO_TESTING_ASPECT,
    tests = TESTS,
)
