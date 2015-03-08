#ifndef TEST_ME
#define TEST_ME

#include <stdint.h>
#include <stdio.h>

#define TESTME_START(name) \
    uint8_t name(void)     \
    { \
    uint8_t result = 0; \
    char *test_name = "" #name "";

#define TESTME_END return result;}

#define TESTME_ASSERT_INT_EQ(a, b) \
    if(a != b) \
    { \
    printf("%s Assertion Failed: %d != %d\n", test_name, a, b); \
    return 1; \
    }

#define TESTME_SUITE(name) \
    int main(void) \
    { \
    char *suite_name = "" #name ""; \
    uint32_t tests_passed = 0, total_tests = 0; \
    printf("Running Test Suite %s.\n", suite_name);

#define TESTME_SUITE_RUN_TEST(name) \
    total_tests++; \
    tests_passed += name() ? 0 : 1;

#define TESTME_SUITE_END \
    printf("Passed: %d Total: %d\n", tests_passed, total_tests); \
    return (tests_passed == total_tests) ? 0 : 1; \
    }

#endif /*TEST_ME*/
