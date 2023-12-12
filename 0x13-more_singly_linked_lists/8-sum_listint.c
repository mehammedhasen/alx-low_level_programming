#include "lists.h"

/**
 * sum_listint - Sums all list data of linked
 * @head: Pointer to a struct
 * Return: Sum of all list data (n) of a linked anf 0 if empty list
 */
int sum_listint(listint_t *head)
{
int sum = 0;
while (head)
{
sum += head->n;
head = head->next;
}
return (sum);
}
