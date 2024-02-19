#include "sort.h"

/**
 * swap - swap two nodes.
 * @a: first node-- beagining node.
 * @b: second node next node.
 * Return: nothing
 */
void swap(listint_t *node1, listint_t *node2)
{
	if (node1->prev)
		node1->prev->next = node2;
	if (node2->next)
		node2->next->prev = node2;
	node1->next = node2->next;
	node2->prev = node1->prev;
	node1->prev = node2;
	node2->next = node1;
}

/**
 * insertion_sort_list - perform insertion using insertion_sort_list.
 * @list: list to be sorted with insertion_sort_list.
 * Return: nothing
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *a, *j;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;
	a = (*list)->next;
	while (a)
	{
		j = a;
		a = a->next;
		while (j && j->prev)
		{
			if (j->prev->n > j->n)
			{
				swap(j->prev, j);
				if (j->prev == NULL)
					*list = j;
				print_list((const listint_t *)*list);
			}
			else
				j = j->prev;
		}
	}
}
