#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "./libft/libft.h"

typedef struct s_slist
{
    int num;
    struct s_slist *next;
}               t_slist;

typedef struct s_stack
{
    t_slist *begin;
    t_slist *end;
    int size;
}           t_stack;

void sa(t_stack *a);
void sb(t_stack *b);
void ss(t_stack *a, t_stack *b);
void pa(t_stack *a, t_stack *b);
void pb(t_stack *a, t_stack *b);
void ra(t_stack *a);
void rb(t_stack *b);
void rr(t_stack *a, t_stack *b);
void rra(t_stack *a);
void rrb(t_stack *b);
void rrr(t_stack *a, t_stack *b);
void init_stack(t_stack *a, char **av);
void exit_message(t_stack* a, char *str, int status);
t_slist *new_list(long num, t_stack* a);
int check_dup(t_slist *l);
void print_stack(t_stack *a);
void free_all(t_stack *s);

#endif