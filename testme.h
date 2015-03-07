#ifndef TEST_ME
#define TEST_ME

#include <stdint.h>

#define TESTME_START(name) \
    uint8_t name(void)     \
    { \
    uint8_t result = 0;

#define TESTME_END return result;}

#endif /*TEST_ME*/
