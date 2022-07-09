#include "main.h"

/**
 * print_int - prints int
 * @a: the int to be printed
 *
 * Return: 0
 */

int print_int(int a)
{
	long digit, num;
	int j, i = 0;


	num = a;

	/* prints negative if num is less than 0 */
	if (num < 0)
	{
		num = num * (-1);
		_putchar('-');
		i = i + 1;
	}

	digit = 1;
	j = 1;
	while (j)
	{
		if (num / (digit * 10) > 0)
			digit = digit * 10;
		else
			j = 0;
	}

	while (num >= 0)
	{
		if (digit == 1)
		{
			_putchar(num % 10 + '0');
			num = -1;
			i = i + 1;
		}
		else
		{
			_putchar((num / digit % 10) + '0');
			digit = digit / 10;
			i = i + 1;
		}
	}
	return (i);
}
