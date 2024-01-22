#include "monty.h"

/**
* f_rotl- function that rotates the stack to the top
* @head: head of the stack
* @counter: line count
*
* Return: nothing
*/
void f_rotl(stack_t **head,  __attribute__((unused)) unsigned int counter)
{
	stack_t *tmp = *head, *aux;

	if (!*head || !(*head)->next)
		return;
	aux = (*head)->next;
	aux->prev = NULL;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = *head;
	(*head)->next = NULL;
	(*head)->prev = tmp;
	(*head) = aux;
}
