#include "push_swap.h"

void exit_message(t_stack* a, char *str, int status)
{
    write(2, str, ft_strlen(str));
    free_all(a);
    exit(status);
}

void init_stack(t_stack *a, char **av)
{
    int i = 1;
    t_slist* temp;
    a->begin = new_list(ft_atoi(av[i++]), a);
    temp = a->begin;
    while (av[i+1])
    {
        temp->next = new_list(ft_atoi(av[i++]), a);
        temp = temp->next;
    }
    temp->next = new_list(ft_atoi(av[i++]), a);
    a->end = temp->next;
}

int main(int ac, char **av)
{
    if(ac > 1)
    {
        t_stack *a = malloc(sizeof(t_stack));
        if(!a)
            exit_message(a, "Error during malloc\n", EXIT_FAILURE);
        init_stack(a, av);
        a->size = ac - 1;
        if(check_dup(a->begin))
            exit_message(a, "Wrong parametr\n", EXIT_FAILURE);
        t_stack *b = malloc(sizeof(t_stack));
        if(!b)
            exit_message(b, "Error during malloc\n", EXIT_FAILURE);
        sort_stack(a, b);
    }
}