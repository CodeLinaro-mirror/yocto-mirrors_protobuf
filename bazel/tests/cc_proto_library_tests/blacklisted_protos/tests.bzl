"""Tests for cc_proto_library with blacklisted protos."""

load("//bazel/tests/cc_proto_library_tests:test_utils.bzl", "get_cc_info_artifacts")

def _test_blacklisted_protos(env, target):
    artifacts = get_cc_info_artifacts(target)

    env.expect.that_collection(artifacts.compilation_context_headers_in_package).is_empty()

TESTS = {
    ":descriptor_cc_proto": [_test_blacklisted_protos],
}
