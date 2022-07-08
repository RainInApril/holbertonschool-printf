#include <stdarg.h>
#include "main.h"

int print_func(const char *modifier, va_list list)
{
	int index = 0;

	s_mod selector[] = {
		{"c", print_c},
		{NULL, NULL}
	};
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
	return (0);
}

int _printf(const char *format, ...)
{
	va_list list;
	int index = 0, count = 0;

	/* starts the list at string format */
	va_start(list, format);
        /**
	 * This loop searches for the '%' character and will send it too
	 * the print_func function to do the rest of the work
	 */
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
