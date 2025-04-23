#include <stdint.h>
#include <stdlib.h>
#include "binary_search.h"

int32_t binary_search_f(uint32_t *v, uint32_t left, uint32_t right, uint32_t x)
{
    uint32_t m = (left + right)/2;

    if(left > right)
        return -1;
    
    if(v[m] == x)
        return m;

    else if(v[m] < x)
        return binary_search_f(v, m + 1, right, x);
    
    else
        return binary_search_f(v, left, m - 1, x);
}