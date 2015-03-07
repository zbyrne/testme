#ifndef TEST_ME
#define TEST_ME

#include <stdint.h>
#include <stdio.h>

#define TESTME_START(name) \
    uint8_t name(void)     \
    { \
    uint8_t result = 0;

#define TESTME_END return result;}

#define TESTME_ASSERT_INT_EQ(a, b) \
    if(a != b) \
    { \
    printf("TESTME Assertion Failed: %d != %d\n", a, b); \
    return 1; \
    }

#endif /*TEST_ME*/
