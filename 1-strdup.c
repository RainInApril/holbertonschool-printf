#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicates an array and stores it in a memory allocation
 * @str: pointer to the string array
 * Return: The duplicated array stored in new pointer
 */

char *_strdup(const char *str)
{
	char *dupe;
	int strLen, array;

	if (str == NULL)
	{
		return (NULL);
	}
	strLen = _strlen(str);
	dupe = malloc(strLen * sizeof(char) + 1);

	if (dupe == NULL)
	{
		return (NULL);
	}
	array = 0;
	while (str[array] != '\0')
	{
		dupe[array] = str[array];
		array = array + 1;
	}
	dupe[array] = '\0';
	return (dupe);
}
