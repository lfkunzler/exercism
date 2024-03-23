#include "hamming.h"
#include <string.h>


int compute(const char *lhs, const char *rhs)
{
    size_t i;
    size_t lhs_len, rhs_len;
    unsigned int diff = 0;
    if (!lhs || !rhs)
        return 0;

    lhs_len = strlen(lhs);
    rhs_len = strlen(rhs);

    if (lhs_len != rhs_len)
        return -1;

    for (i=0; i<lhs_len && i<rhs_len; i++) {
        if (lhs[i] != rhs[i])
            diff++;
    }

    return diff;
}
