#include "main.h"

int _printf(const char *format, ...)
{
	int i = 0, n = 0, j = 0;
	va_list args;
	struc func[] = {
		{"s", print_s},
		{"\0", NULL}
	};
	if (format == NULL)
		return (-1);
	va_start(args, format);
	
	i = 0;
	while (format[i] != '\0')
	{
		if (format[i] != '%')
			_putchar(format[i]), n++;
		else if (format[i + 1])
		{
			j = 0;
			while (*(func[j].c) != '\0')
			{
				if (format[i + 1] == *(func[j].c))
				{
					n += func[j].f(args), i++;
					break;
				}
				j++;
			}
		}
		i++;
	}
	va_end(args);
	if (n == 0)
		return (-1);
	return (n);
}
