#include <stdio.h>
#include "list.h"

int main(void) {
    // Stak-allokeret liste
    struct list_t foo = make_list(42);
    struct list_t bar = make_list(43);
    struct list_t baz = make_list(44);

    foo.next = &bar;
    bar.next = &baz;
    baz.next = NULL;

    push_list(foo, 45);

    // Heap-allokeret liste kalder malloc()

    return 0;
}