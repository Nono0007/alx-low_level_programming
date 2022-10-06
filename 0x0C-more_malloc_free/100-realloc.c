#include <stdlib.h>
#include <stdio.h>
/**
 * _realloc - reallocates memory using malloc and free
 * @ptr: pointer to the memory previously allocated with a
 * call to ``` malloc : malloc(old_size) ```.
 * @old_size: size in bytes allocated for ptr.
 * @new_size: size in bytes of new memory block.
 *
 * Return: pointer to new mem block, NULL or ptr.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *p, *arr_old;

	if (ptr != NULL)
	{
		arr_old = ptr;
	}
	else
	{
		return ((malloc(new_size)));
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	if (new_size > old_size)
	{
		p = malloc(new_size);
		if (p == NULL)
		{
			return (p);
		}
		for (i = 0; i < old_size; i++)
		{
			p[i] = arr_old[i];
		}
		free(arr_old);
	}
	return (p);
}
