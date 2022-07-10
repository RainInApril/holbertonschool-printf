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
	/* char afterPercent = *(modifier + 1);*/

	s_mod selector[] = {
		{"c", print_char},
		{"s", print_str},
		{"d", convert},
		{"i", convert},
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
		/*else if (*(modifier + 1) == '%')
		{
			_putchar('%');
			return (1);
			} */
		else
		index++;
	}
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
	int index = 0, count = 0;

	va_start(list, format);

	if (format == NULL)
		return (-1);

	if (format != NULL)
	while (format[index] != '\0')
	{
		if (format[index] == '%' && format[index + 1] == 'c')
		{
			count = count + print_func(&format[index], list);
			index = index + 2;
		}
		   if (format[index] == '%' && format[index + 1] == 's')
                {
                        count = count + print_func(&format[index], list);
                        index = index + 2;
                }
		      if (format[index] == '%' && format[index + 1] == 'd')
                {
                        count = count + print_func(&format[index], list);
                        index = index + 2;
                }
		         if (format[index] == '%' && format[index + 1] == 'i')
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
	va_end(list);
	/* returns value stored from print_func */
	return (count);
}
