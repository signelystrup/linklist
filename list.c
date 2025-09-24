#include <stddef.h>
#include <stdlib.h>
#include "list.h"

struct list_t *make_list(int value) {
    // Problem: Det her kæde-led er stak-allokeret, og lever ikke længe nok
    // struct list_t new;
    // new.next = NULL;
    // new.value = value;

    // Løsning: Heap-allokeringer lever længe nok
    struct list_t *new = malloc(sizeof(struct list_t));
    // (*new).next = NULL;
    // (*new).value = value;
    new->next = NULL;
    new->value = value;
    return new;
}

void push_list(struct list_t *list, int value) {
    struct list_t *current = list;
    while (current->next != NULL) {
        current = current->next;
    }

    struct list_t *new = make_list(value);
    // struct list_t *new_pointer = &new;
    // struct list_t new_again = *new_pointer;
    current->next = new;
}

int pop_list(struct list_t *list) {
    // TODO: Lav mig!

    struct list_t *prev = list;
    struct list_t *current = list->next;

    if (prev == NULL) {
        return -1;
    }

    while (current->next != NULL) {
        prev = current;
        current = current->next;
    }

    int data = current->value;

    //remove reference from new tail.
    prev->next = NULL;

    //Deallocate link
    free(current->next);

    return data;
}
