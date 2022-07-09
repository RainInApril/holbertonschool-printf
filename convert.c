#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 * convert - convert arguments to int
 * @list: list of arguments
 * Return: int
 */

int convert(va_list list)
{
	int num;
	int i;

	num = va_arg(list, long int);
	i = print_int(num);
	return (i);
}
