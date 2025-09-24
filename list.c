#include <stddef.h>
#include "list.h"

struct list_t make_list(int value) {
    struct list_t new;
    new.next = NULL;
    new.value = value;
    return new;
}

void push_list(struct list_t list, int value) {
    struct list_t *current = &list;
    while (current->next != NULL) {
        current = current->next;
    }
    struct list_t new = make_list(value);
    // struct list_t *new_pointer = &new;
    // struct list_t new_again = *new_pointer;
    current->next = &new;
}

int pop_list(struct list_t list) {

}
