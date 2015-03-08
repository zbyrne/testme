#include "testme.h"
#include <stdio.h>
#include <stdint.h>
TESTME_START(test_pass)
{
    result = 0;
}
TESTME_END

TESTME_START(test_fail)
{
    result = 1;
}
TESTME_END

TESTME_START(test_assert)
{
    TESTME_ASSERT_INT_EQ(0, 1);
}
TESTME_END

TESTME_START(test_run_test)
{
    char mesg[200];
    uint8_t res = test_pass(mesg);
    TESTME_ASSERT_INT_EQ(res, 0);
    res = test_fail(mesg);
    TESTME_ASSERT_INT_EQ(res, 1);
}
TESTME_END

TESTME_START(test_assert_failure)
{
    char mesg[200];
    TESTME_ASSERT_INT_EQ(test_assert(mesg), 1);
}
TESTME_END

TESTME_SUITE(testme_suite)
{
    TESTME_SUITE_RUN_TEST(test_run_test);
    TESTME_SUITE_RUN_TEST(test_assert_failure);
}
TESTME_SUITE_END
