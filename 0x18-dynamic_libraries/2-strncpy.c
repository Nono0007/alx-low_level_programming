#include "main.h"
/**
 * _strncpy - A function that copies a string
 * @dest: a pointer to the destination string
 * @src: a pointer to the source string
 * @n: number of bytes from src to be copied
 * Return: returns dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
