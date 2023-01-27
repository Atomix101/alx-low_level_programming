#include "lists.h"
/**
 * print_list - prints all list elements of list_t.
 * @h: signly linked list
 * Return: number of lidt elements.
 */
size_t print_list(const list_t *h)
{
	size_t nelem;

	nelem = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(null)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		nelem++;
	}
	return (nelem);
}
