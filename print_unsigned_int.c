#include"main.h"

/**
 * print_unsigned - prints unsigned int
 * @arg: arguments
 * Return: count
 */
int print_unsigned(va_list arg)
{
	int count = 0;
	unsigned int val = va_arg(arg,int);

	if (val == 0)
	{
		count++;
		_putchar('0');
		return (count);	
	}

	if (val < 0)
	{
		val = -val;
		_putchar('_');
		count = count + 1;
	}
	if (val / 10)
	{
		count = count + print_unsigned_int(arg);
		_putchar(val % 10 + '0');
		count += 1;
	}
	else
	{
		_putchar(val + '0');
		count += 1;
	}
	return (count);
}
