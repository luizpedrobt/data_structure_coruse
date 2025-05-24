#include <stdio.h>
#include <stdint.h>
#include "node.h"

int main(void)
{
    uint32_t num;
    node_t *list = create_list();
    do
    {
        scanf("%d", &num);
        if(num > 0)
            add_beginning(&list, num);
    } while (num > 0);
    print_list(list);
    erase_list(&list);
    return 0;
}