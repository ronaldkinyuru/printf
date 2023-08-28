#include "main.h"
/**
  * print_unsigned_decimal - prints unsigned decimal
  * @arg: arguments
  * Return: count
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
		char unsigned_string[11]; /*The maximum value of an unsigned 32-bit integer is 4,294,967,295. This number has 10 digits*/
		i = 0;
		while (val !=0)
		{
			unsigned_string[i] = (val % 10) + 48;
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
