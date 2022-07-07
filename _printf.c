#include <stdarg.h>

#include "main.h"

int print_mod(char *format, va_list list)
{
	char *flag;
	int index = 0;

	flag = va_arg(list, char *);

	s_mod selector[] = {
		{"s", print_s},
		{NULL, NULL}
	};
	*flag = *(format + 1);
	if (*(flag) == '%')
	{
		_putchar('%');
		return (1);
	}
	while (selector[index].symbol != NULL)
	{
		if (selector[index].symbol == flag)
		{
			/* current error on return value during compile */
			return (selector[index].func);
		}
		index++;
	}
	return (0);
}

int _printf(const char *format, ...)
{
	char * strcopy;
	va_list list;
	int index = 0, count;

	/* starts the list at string format */
	va_start(list, format);
	/* duplicates string 'format' into strcopy to be manipulated */
	strcopy = _strdup(format);
        /**
	 * This loop searches for the '%' character and will send it too
	 * the print_selector function to do the rest of the work
	 */
	while (strcopy != NULL && (*(strcopy + index) != '\0'))
	{
		if (strcopy[index] == '%')
		{
			count = count + print_mod(strcopy, list);
		}
		_putchar(strcopy[index]);
		index++;
	}
	/* sets len to equal the length of string */
	/* returns the length of the string */
	return (count);
}
