#include <stdio.h>
#include "list.h"

int main(void) {
    // Stak-allokeret liste
    struct list_t *foo = make_list(42);
    struct list_t *bar = make_list(43);
    struct list_t *baz = make_list(44);

    foo->next = bar;
    bar->next = baz;
    baz->next = NULL;

    push_list(foo, 45);
    push_list(foo, 46);

    int wat = pop_list(foo);

    printf("Nu printer vi listen...\n");
    struct list_t *current = foo;
    while (current != NULL) {
        printf("%d -> ", current->value);
        current = current->next;
    }
    printf("SLUT!\n");

    printf("wat er %d\n", wat);


    // Heap-allokeret liste kalder malloc()
/*
    printf("Nu printer vi listen...\n");
    current = foo;
    while (current != NULL) {
        printf("%d -> ", current->value);
        current = current->next;
    }*/
    return 0;
}