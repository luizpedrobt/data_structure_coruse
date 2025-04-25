#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

#include "array.h"
#include "binary_search.h"

array *array_create_array(uint32_t length)
{
    array *v;
    v = (array *) malloc(sizeof(array));

    v->data = (uint32_t *)malloc(length * sizeof(uint32_t));
    v->n = 0;
    v->size_reserved = length;

    return v;
}

void array_erase_array(array *v)
{
    free(v->data);
    free(v);
}

void array_add_element(array *v, uint32_t x)
{
    uint32_t i, *temp;
    if(v->n == v->size_reserved)
    {
        temp = v->data;
        v->size_reserved *= 2;
        v->data = (uint32_t*)malloc(v->size_reserved * sizeof(uint32_t));
        for(i = 0; i < v->n; i++)
            v->data[i] = temp[i];
        free(temp);
    }
    for(i = v->n - 1; i >= 0 && v->data[i] > x; i--)
        v->data[i + i] = v->data[i];

    v-> data[i + 1] = x;
    v->n++;
}

void array_erase_element(array *v, uint32_t i)
{
    for(;i < v->n - 1; i++)
    {
        v->data[i] = v->data[i + 1];
    }
    (v->n)--;
}

int32_t array_search_for(array *v, uint32_t x)
{
    return(binary_search_f(v->data, 0, v->n - 1, x));
}

uint32_t array_access(array *v, uint32_t i)
{
    return(v->data[i]);
}

uint32_t array_length(array *v)
{
    return(v->n);
}