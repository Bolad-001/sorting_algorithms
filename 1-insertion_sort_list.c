#include "sort.h"

/**
 * swap_node - funtion that swap nodes in a
 * double linked list
 * @list: list to check
 * @node1: first node
 * @node2: second node
 *
 * Return: nothing
 */

void swap_node(listint_t **list, listint_t *node1, listint_t *node2)
{
	listint_t *temp;

	if (node1 == NULL || node2 == NULL || node1 == node2)
		return;

	if (node1->prev != NULL)
		node1->prev->next = node2;
	else
		*list = node2;

	if (node2->next != NULL)
		node2->next->prev = node1;

	temp = node1->prev;
	node1->prev = node2->prev;
	node2->next = temp;
}

/**
 * insertion_sort_list - function to sort a doubly lonked
 * list using insertion sort
 * @lsit: list to sort
 *
 * Return: nothing
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *temp, *aux;

	if (*list == NULL || (*list)->next == NULL)
		return;

 	aux = (*list)->next;

	while(aux != NULL)
	{
		temp = aux;
		while(temp->prev != NULL && temp->n < temp->prev->n)
		{
			swap_node(list, temp->prev, temp);
			/*if (aux->prev)
				(aux->prev)->next = temp;
			aux->prev = temp;*/
			if (temp->prev == NULL)
				*list = temp;
			print_list(*list);
			temp = temp->prev;
		}

		aux = aux->next;

	}


}
