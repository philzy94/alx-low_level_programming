#include "lists.h"

/**
  * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
  * @head: The head pointer of the linked list
  * @index: Index of the node to return
  *
  * Return: The node if it exists otherwise NULL
  */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ptr = head;
	unsigned int counter = 0;

	while (ptr != NULL)
	{
		if (counter == index)
		{
			return (ptr);
		}
		else
		{
			ptr = ptr->next;
			counter++;
		}
	}

	return (NULL);
}
