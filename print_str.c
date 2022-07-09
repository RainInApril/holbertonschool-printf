#include "main.h"

/**
 *print_str - Function used to print string of characters
 *@list: va_list parameter
 *Return: Number of char printed
 */
int print_str(va_list list)
{
	int count;
	char *string;

	string = va_arg(list, char *);

	if (string == NULL)
	{
		string = "(null)";
	}
	count = 0;
	/* increments count until NULL */
	while (string[count] && string != NULL)
	{
		_putchar(string[count]);
		count++;
	}
	return (count);
}
