#include "main.h"

/**
 * _strncpy - function that copies a string.
 * @src: cadena a copiar
 * @dest: destino de la cadena.
 * @n: number.
 * Return: void
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	wile (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
