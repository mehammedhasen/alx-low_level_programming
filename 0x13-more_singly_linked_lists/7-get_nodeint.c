#include "lists.h"

/**
 * get_nodeint_at_index - Returns the n th node of a linked list
 * @head: Pointer to a struct
 * @index: Index of node
 * Return: n th node of a linked list and Null if node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i = 0;
while (head)
{
if (i == index)
return (head);
head = head->next;
++i;
}
return (NULL);
}
