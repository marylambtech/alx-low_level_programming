#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _r - reallocates memory for an array
 * @list: old list
 * @size: size of the new list
 * @new: new node list
 *
 * Return: pointer to the new list
 */

const listint_t **_r(const listint_t **list, size_t size, const listint_t *new)
{
	const listint_t **newlist;
	size_t s;

	newlist = malloc(size * sizeof(listint_t *));
	if (newlist == NULL)
	{
		free(list);
		exit(98);
	}
	for (s = 0; s < size - 1; s++)
		newlist[s] = list[s];
	newlist[s] = new;
	free(list);
	return (newlist);
}

/**
 * print_listint_safe - prints a linked list.
 * @head: start pointer of the list
 *
 * Return: number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t s, num = 0;
	const listint_t **list = NULL;

	while (head != NULL)
	{
		for (s = 0; s < num; s++)
		{
			if (head == list[s])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(list);
				return (num);
			}
		}
		num++;
		list = _r(list, num, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(list);
	return (num);
}
