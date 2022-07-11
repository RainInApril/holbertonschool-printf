#include <stdarg.h>
#include "main.h"

/**
 *print_func - takes % into account
 *@modifier: modifier
 *@list: the list of items in the argument
 *Return: number of chars displayed or -1 on invalid symbol
 */


int print_func(const char *modifier, va_list list)
{
	int index = 0;
	/* char afterPercent = *(modifier + 1);*/

	s_mod selector[] = {
		{"c", print_char},
		{"s", print_str},
		{"d", convert},
		{"i", convert},
		{"%", print_percent},
		{NULL, NULL}
	};
	if (*modifier == '%' && *(modifier + 1) == '\0')
	{
		return (0);
	}
	while (selector[index].symbol != NULL)
	{
		/* checks if selector matches the char after mod */
		if (selector[index].symbol[0] == *(modifier + 1))
		{
			/* returns function that matches selector */
			return (selector[index].func(list));
		}
		index++;
	}
/*	_putchar(*modifier);
	_putchar(*(modifier + 1)); */
	return (-1);
}

/**
 *_printf - main function to display
 *@format: the string to be displayed
 *Return: the string of characters via putchar
 */

int _printf(const char *format, ...)
{
	va_list list;
	int index = 0;
	/* count number of total character displayed  */
	int count = 0;
	int stored = 0;

	va_start(list, format);

	if (format == NULL)
		return (-1);

	while (format[index] != '\0')
	{
		if (format[index] == '%')
		{
/*			count = count + print_func(&format[index], list);
			index = index + 2; */

/* define stored as value from print_func if find % */

			stored = print_func(&format[index], list);
			 if (stored == -1)
			 {
			 	_putchar(format[index]);
			 	_putchar(format[index + 1]);
			 	count = count + 2;
			 	index = index + 2;
			}
			 if (stored == 0)
			 {
				 count = count + stored;
				 index = index + 2;
			 }
			else
			{
				count = count + stored;
				index = index + 2;
				}

		}
		else
		{
			count = count + _putchar(format[index]);
			index = index + 1;
		}
	}
	va_end(list);
	return (count);
}
