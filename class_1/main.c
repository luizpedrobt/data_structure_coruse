#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

#include "array.h"
#include "binary_search.h"

#define  VALUE_TEST 30

int main(void)
{   
    array *vec = array_create_array(100);
    for(uint32_t i = 0; i < 10; i++)
    {
        array_add_element(vec, i*10);
    }
    
    for(uint32_t i = 0; i < vec->n; i++)
    {
        printf("Position: %d | Element: %d\n", i, array_access(vec, i));
    }

    if(array_search_for(vec, VALUE_TEST) == -1)
        printf("There's no element %d\n", VALUE_TEST);

    else
        printf("Element in position: %d\n", array_search_for(vec, VALUE_TEST));


    printf("Current array size: %d\n", array_length(vec));

    array_erase_element(vec, 5);
    printf("Current array size after erase: %d\n", array_length(vec));

    array_erase_array(vec);
    printf("Array size after total erase: %d\n", array_length(vec));
    
    return 0;
}