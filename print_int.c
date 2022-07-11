#include "main.h"

/**
 * print_int - prints int
 * @num: the int to be printed
 *
 * Return: length of num
 */

int print_int(int num)
{
	long int decimalPoint, numToBePrinted;
	int j, numLen = 0;

	numToBePrinted = num;

	/* converts num to positive to be manipulated */
	if (numToBePrinted < 0)
	{
		numToBePrinted = numToBePrinted * (-1);
		_putchar('-');
		numLen++;
	}
	decimalPoint = 1;
	j = 1;
	/* moves decimal to left to check size of num */
	while (j)
	{
		if (numToBePrinted / (decimalPoint * 10) > 0)
			decimalPoint = decimalPoint * 10;
		else
			j = 0;
	}
	while (numToBePrinted >= 0)
	{
		/* prints last digit of num */
		if (decimalPoint == 1)
		{
			_putchar(numToBePrinted % 10 + '0');
			numToBePrinted = -1;
			numLen++;
		}
		else
		{
			/* prints all other digits starting from the left */
			_putchar((numToBePrinted / decimalPoint % 10) + '0');
			decimalPoint = decimalPoint / 10;
			numLen++;
		}
	}
	return (numLen);
}
