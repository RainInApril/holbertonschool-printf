#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 * print_char - prints the char to stdout
 * @c: the char to be rpinted
 *
 * Return: 1
 */

int print_char(va_list list)
{
	unsigned char c;

	c = va_arg(list, int);
	_putchar(c);
	return (1);
}

/**
 * print_percent - prints the %
 *
 * Return: 1
 */

int print_percent(void)
{
	_putchar('%');
	return (1);
}
