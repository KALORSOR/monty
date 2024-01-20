#include "monty.h"
/**
 * f_pall - prints on the stack from top
 * @head: head of stack
 * @counter: unused
 * Return: return none
*/
void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
