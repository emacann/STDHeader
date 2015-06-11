#include "STDHeader.h"

#include <stdio.h>

int
main(int argc, char ** pp_argv)
{
    printf("=== STDHeader Tester ===\n\n");

    ////////////////////////////////////////////////////////////////////////////
    // size.h //////////////////////////////////////////////////////////////////

    printf("=== Types ===\n");

    printf("int8_t:\t\t%d\n",       sizeof(int8_t)      * 8);
    printf("uint8_t:\t%d\n",        sizeof(uint8_t)     * 8);
    printf("int16_t:\t%d\n",        sizeof(int16_t)     * 8);
    printf("uint16_t:\t%d\n",       sizeof(uint16_t)    * 8);
    printf("int32_t:\t%d\n",        sizeof(int32_t)     * 8);
    printf("uint32_t:\t%d\n",       sizeof(uint32_t)    * 8);
    printf("int64_t:\t%d\n",        sizeof(int64_t)     * 8);
    printf("uint64_t:\t%d\n\n",     sizeof(uint64_t)    * 8);

    printf("intmax_t:\t%d\n",       sizeof(intmax_t)    * 8);
    printf("uintmax_t:\t%d\n\n",    sizeof(uintmax_t)   * 8);

    printf("size_t:\t\t%d\n",       sizeof(size_t)      * 8);
    printf("ptr_t:\t\t%d\n",        sizeof(ptr_t)       * 8);
    printf("intptr_t:\t%d\n",       sizeof(intptr_t)    * 8);
    printf("uintptr_t:\t%d\n\n",    sizeof(uintptr_t)   * 8);

    printf("=== Max/Min values ===\n");

    printf("INT8_MAX:\t%i\n",       INT8_MAX);
    printf("INT8_MIN:\t%i\n",       INT8_MIN);
    printf("UINT8_MAX:\t%u\n",      UINT8_MAX);

    printf("INT16_MAX:\t%i\n",      INT16_MAX);
    printf("INT16_MIN:\t%i\n",      INT16_MIN);
    printf("UINT16_MAX:\t%u\n",     UINT16_MAX);

    printf("INT32_MAX:\t%li\n",     INT32_MAX);
    printf("INT32_MIN:\t%li\n",     INT32_MIN);
    printf("UINT32_MAX:\t%lu\n",    UINT32_MAX);

    printf("INT64_MAX:\t%lli\n",    INT64_MAX);
    printf("INT64_MIN:\t%lli\n",    INT64_MIN);
    printf("UINT64_MAX:\t%llu\n",   UINT64_MAX);
    
    getchar();

    return 0;
}