#include "push_swap.h"

t_slist *new_list(long num, t_stack* a)
{
	if(num == LONG_MAX)
		exit_message(a, "wrong parametr\n", EXIT_FAILURE);
	t_slist *l = malloc(sizeof(t_slist));
	if(!l)
		exit_message(a, "Error during malloc\n", EXIT_FAILURE);
	l->num = num;
	l->next = NULL;
	return(l);
}

void print_stack(t_stack *a)
{
	t_slist* tmp = a->begin;
	while(tmp)
	{
		printf("%d\n", tmp->num);
		tmp = tmp->next;
	}
}

int check_dup(t_slist *l)
{
	t_slist* a = l;
	t_slist* b;
	while (a)
	{
		b = a->next;
		while (b)
		{
			if (b->num == a->num)
				return (1);
			b = b->next;
		}
		a = a->next;
	}
	return (0);
}

void sa(t_stack *a)
{
	t_slist* temp;
	t_slist* begin = a->begin;
	if(begin && begin->next)
	{
		while ((begin->next)->next)
		{
			temp = begin;
			begin = begin->next;
		}
		temp->next = begin->next;
		(begin->next)->next = begin;
		begin->next = NULL;
		a->end = begin;
	}
}
void sb(t_stack *b)
{
	sa(b);
}

void ss(t_stack *a, t_stack *b)
{
	sa(a);
	sb(b);
}

void pa(t_stack *a, t_stack *b)
{
	if (b->begin)
	{
		t_slist* temp;
		t_slist* begin = b->begin;
		if(begin)
		{
			while (begin->next)
			{
				temp = begin;
				begin = begin->next;
			}
			temp->next = NULL;
			b->end = temp;
			b->size--;
			(a->end)->next = begin;
			a->end = begin;
			a->size++;
		}
	}
}

void pb(t_stack *a, t_stack *b)
{
	pa(b, a);
}

void ra(t_stack *a)
{
	if (a->begin)
	{
		t_slist* begin = a->begin;
		t_slist* end;
		t_slist* new = a->begin;
		while(new->next)
		{
			end = new;
			new = new->next;
		}
		end->next = NULL;
		a->end = end;
		new->next = begin;
		a->begin = new;
	}
}

void rb(t_stack *b)
{
	ra(b);
}

void rr(t_stack *a, t_stack *b)
{
	ra(a);
	ra(b);
}

void rra(t_stack *a)
{
	if (a->begin)
	{
		t_slist* begin = (a->begin)->next;
		t_slist* end = a->begin;
		t_slist* temp = a->begin;
		while(temp->next)
			temp = temp->next;
		temp->next = end;
		end->next = NULL;
		a->begin = begin;
		a->end = end;
	}
}

void rrb(t_stack *b)
{
	rra(b);
}

void rrr(t_stack *a, t_stack *b)
{
	rra(a);
	rra(b);
}