/*
** EPITECH PROJECT, 2021
** Redemption
** File description:
** requirement
*/

#ifndef REQUIREMENT_H_
#define REQUIREMENT_H_

#include <stdlib.h>

typedef struct list {
    void *data;
    struct list *next;
} list_t;

int my_revlist_synthesis(list_t **begin);
list_t *my_findnodeeqinlist_synthesis(list_t *begin, void *data_ref,
                                        int (*cmp)(void *, void *));

#endif /* !REQUIREMENT_H_ */