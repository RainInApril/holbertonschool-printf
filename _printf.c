#include <stdarg.h>
#include "main.h"

int print_mod(const char *modifier, va_list list)
{
	int index = 0;

	s_mod selector[] = {
		{"s", print_s},
		{NULL, NULL}
	};
	while (selector[index].symbol != NULL)
	{
		if (selector[index].symbol[0] == *(modifier + 1))
		{
			/* current error on return value during compile */
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
	/* duplicates string 'format' into strcopy to be manipulated */

        /**
	 * This loop searches for the '%' character and will send it too
	 * the print_selector function to do the rest of the work
	 */
	while (format != NULL && (format[index] != '\0'))
	{
		if (format[index] == '%')
		{
			count = count + print_mod(&format[index], list);
			index = index + 2;
		}
		else
		{
			count = count + _putchar(format[index]);
			index = index + 1;
		}
	}
	/* sets len to equal the length of string */
	/* returns the length of the string */
	return (count);
}
