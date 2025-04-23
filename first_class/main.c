#include <stdio.h>
#include <stdint.h>
#include "cbf.h"

int main(void)
{
    uint8_t buffer[10];

    uint8_t c;
    cbf_t cb;

    cbf_init(&cb, buffer, sizeof(buffer));
    printf("Buffer size: %d\n", cb.size);
    printf("Buffer available: %d\n", cbf_bytes_available(&cb));

    cbf_put(&cb, 15);
    cbf_put(&cb, 10);

    printf("Buffer available after put: %d\n", cbf_bytes_available(&cb));
    cbf_get(&cb, &c);

    printf("Buffer available after get: %d\n", cbf_bytes_available(&cb));
    printf("Buffer value: %d\n", c);

    cbf_flush(&cb);
    printf("Buffer available after flush: %d\n", cbf_bytes_available(&cb));

    return 0;
}