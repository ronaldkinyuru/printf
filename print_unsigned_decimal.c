#include "main.h"

/**
 * print_unsigned_decimal - Prints unsigned decimal
 * @arg: Argument containing the unsigned long integer to be printed
 * Return: Number of characters printed
 */
int print_unsigned_decimal(va_list arg)
{
	int count = 0;
	int i;
	int num_digits = 1;
	unsigned long int val = va_arg(arg, unsigned long int);

	unsigned long int temp = val;

	while (temp != 0)
	{
		temp /= 10;
		num_digits++;
	}

	if (val == 0)
	{
		_putchar('0');
		count++;
	}
	else
	{
		char unsigned_string[11]; /* Max value is 4,294,967,295 (10 digits) */

		i = 0;

		while (val != 0)
		{
			unsigned_string[i] = (val % 10) + '0';
			val /= 10;
			i++;
		}

		for (i = num_digits - 1; i >= 0; i--)
		{
			_putchar(unsigned_string[i]);
			count++;
		}
	}

	return (count);
}

