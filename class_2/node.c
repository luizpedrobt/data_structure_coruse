#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include "node.h"

node_t* create_list()
{
    return NULL;
}

#if TESTS
void erase_list(node_t *list) // Time to execute O(n)
{
    while (list != NULL)
    {
        erase_list(list->next);
        free(list);
    }
}
#endif


void erase_list(node_t **list)
{
    node_t *q;
    while (*list != NULL)
    {
        q = *list;
        *list = (*list)->next;
        free(q);
    } 
}


void print_list(node_t *list) // Time to execute O(n)
{
    node_t *aux = list; 
    while (aux != NULL)
    {
        printf("%d -> ", aux->data);
        aux = aux->next;
    }
    printf("NULL ");
}

void add_beginning(node_t **list, uint32_t x) // Time to execute O(1)
{
    node_t *q;
    q = (node_t *)malloc(sizeof(node_t));
    if(q == NULL)
    {
        perror("malloc");
        exit(EXIT_FAILURE);
    }

    q->data = x;
    q->next = *list;
    *list = q;
}

void add_end(node_t **list, uint32_t x) // Time to execute O(n)
{
    node_t *aux, *q;
    q = (node_t *)malloc(sizeof(node_t));
    q->data = x;
    q->next = NULL;

    if(*list == NULL)
        *list = q;
    else
    {
        aux = *list;
        while (aux->next != NULL)
            aux = aux->next;
        aux->next = q;
    }
}

void remove_beginning(node_t **list)
{
    
}

void remove_end(node_t **list)
{

}

void remove_value(node_t **list, uint32_t x)
{

}

uint32_t search_value(node_t **list, uint32_t x)
{

}