/*
** EPITECH PROJECT, 2021
** Redemption
** File description:
** requirement
*/

#include "include/requirement.h"

int my_revlist_synthesis(list_t **begin)
{
    list_t *prev = NULL;
    list_t *current = *begin;
    list_t *next = NULL;

    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    return 0;
}

list_t *my_findnodeeqinlist_synthesis(list_t *begin, void *data_ref,
                                        int (*cmp)(void *, void *))
{
    list_t *current = begin;

    while (current != NULL) {
        if (cmp(current->data, data_ref) == 0)
            return current;
        current = current->next;
    }
    return NULL;
}