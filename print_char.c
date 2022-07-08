#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 * print_char - prints the char to stdout
 * @c: the char to be printed
 *
 * Return: 0
 */

int print_c(va_list list)
{
	unsigned char ch;

	ch = va_arg(list, int);
	_putchar(ch);
	return (0);
}
