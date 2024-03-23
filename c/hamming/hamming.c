#include "hamming.h"
#include <stddef.h>
#include <string.h>


int compute(const char *lhs, const char *rhs)
{
    int diff = 0;

    if (!lhs || !rhs)
        return -1;

    size_t lhs_len = strlen(lhs);

    if (lhs_len != strlen(rhs))
        return -1;

    for (size_t i=0; i<lhs_len; i++) {
        diff += (lhs[i] != rhs[i]);
    }

    return diff;
}
