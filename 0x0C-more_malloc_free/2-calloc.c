#include <stdlib.h>
#include "main.h"
/**
 *_calloc - allocates memory for an array;
 *@nmemb:no of elements
 *@size:size of elements
 *@size:size of elements
 *
 * Return: NULL is size or nmemb == 0.
 * NULL if malloc fails.
 * Pointer to memory allocated if successful.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int sizetot, i;
	void *p;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	sizetot = nmemb * size;
	p = malloc(sizetot);
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < sizetot; i++)
	{
		*((char *)(p) + i) = 0;
	}
	return (p);
}
