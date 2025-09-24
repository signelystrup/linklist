// include guards:
#ifndef LINKLIST_LIST_H
#define LINKLIST_LIST_H

struct list_t {
    struct list_t *next;
    int value;
};

struct list_t *make_list(int);
void push_list(struct list_t, int);
int pop_list(struct list_t);

#endif //LINKLIST_LIST_H