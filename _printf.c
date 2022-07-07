#include <stdarg.h>

#include "main.h"

int print_mod(char *format, va_list list)
{
	char *flag;
	int index = 0;

	s_mod selector[] {
		{"c", print_char},
		{"s", print_string},
		{"i", print_int},
		{"d", print_int},
		{NULL, NULL}
	};
	*flag = format + 1;
	if (flag == '%')
	{
		_putchar('%');
		return (1);
	}
	while (selector[index].symbol != NULL)
	{
		if (selector[index].symbol == flag)
		{
			return (selector[index].func);
		}
		index++;
	}
	return (0);
}

int _printf(const char *format, ...)
{
	va_list list;
	char *strcopy;
	int index = 0, count;

	/* starts the list at string format */
	va_start(list, format);
	/* duplicates string 'format' into strcopy to be manipulated */
        /**
	 * This loop searches for the '%' character and will send it too
	 * the print_selector function to do the rest of the work
	 */
	while (format != NULL && (*(format + index) != '\0'))
	{
		if (format[index] == '%')
		{
			count = count + print_mod(format, list);
		}
		_putchar(format[index]);
		index++;
	}
	/* sets len to equal the length of string */
	count += _strlen(strcopy);
	/* returns the length of the string */
	return (len);
}
