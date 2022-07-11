#include "main.h"

/**
 * print_percent - returns % to the list
 * @list: the character being passed from list
 * Return: 1 if successful
 */

int print_percent(va_list list)
{
	char percent;

	percent = va_arg(list, int);
	_putchar(percent);
	return (1);
}
