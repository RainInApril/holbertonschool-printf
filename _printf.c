#include <stdarg.h>
#include "main.h"

/**
 *print_func - takes % into account
 *@modifier: modifier
 *@list: the list of items in the argument
 *Return: what needs to be returned
 */

int print_func(const char *modifier, va_list list)
{
	int index = 0;

	s_mod selector[] = {
		{"c", print_char},
		{"s", print_s},
		{"\0", NULL}
	};
	while (selector[index].symbol != NULL)
	{
		/* checks if selector matches the char after mod */
		if (selector[index].symbol[0] == *(modifier + 1))
		{
			/* returns function that matches selector */
			return (selector[index].func(list));
		}
		else if (*(modifier + 1) == '%')
		{
			_putchar('%');
			return (0);
		}
		else
			index++;
	}
	return (0);
}

/**
 *_printf - main function to display
 *@format: the string to be displayed
 *Return: the string of characters via putchar
 */

int _printf(const char *format, ...)
{
	va_list list;
	int index = 0, count = 0;

	va_start(list, format);

	while (format != NULL && (format[index] != '\0'))
	{
		if (format[index] == '%')
		{
			count = count + print_func(&format[index], list);
			index = index + 2;
		}
		else
		{
			count = count + _putchar(format[index]);
			index = index + 1;
		}
	}
	/* returns value stored from print_func */
	return (count);
}
