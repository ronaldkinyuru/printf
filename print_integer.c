#include "main.h"
/**
 * print_integer - print integer
 * @arg: argument
 * Return: count
 */
int print_integer(va_list arg)
{
	int count = 0;
	int val = va_arg(arg, int);

	if (val == 0)
	{
		count++;
		_putchar('0');
	}
	if (val < 0)
	{
		val = -val;
		_putchar('_');
		count = count + 1;
	}
	if (val / 10)
	{
		count = count + print_integer(arg);
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
