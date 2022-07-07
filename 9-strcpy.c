#include "main.h"
#include <string.h>

/**
 * _strcpy - copies a string to a new pointer
 * @dest: is the copy of string passed to src
 * @src: is the string being copied
 * Return: dest which is a copy of src
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != 0)
	{
		dest[i] = src[i];
		i = i + 1;
	}
	dest[i] = 0;

	return (dest);
}
