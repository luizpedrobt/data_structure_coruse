#ifndef NODE_H_
#define NODE_H_

#define TESTS 0

typedef struct node_s
{
    uint32_t data;
    struct node_s *next; // Como "node_t" só foi declarado na próxima linha, não é possível declarar algo do tipo "node_t *next", pois o compilador ainda não reconhece a chamada note_t.
}node_t;

node_t* create_list();

void erase_list(node_t **list);

void print_list(node_t *list);

void add_beginning(node_t **list, uint32_t x);

void add_end(node_t **list, uint32_t x);

void remove_beginning(node_t **list);

void remove_end(node_t **list);

void remove_value(node_t **list, uint32_t x);

uint32_t search_value(node_t **list, uint32_t x);

#endif /*NODE_H_*/