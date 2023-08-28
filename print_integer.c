#include "main.h"
/**
 * print_integer - print integer
 * @arg: argument
 * Return: count
 */
int print_integer(va_list arg, int count)
{
	int val = va_arg(arg, int);

	if (val == 0)
	{
		_putchar(0);
		count++;

	}
	if (val < 0)
	{
		val = -val;
		_putchar('-');
		count++;
	}
	if (val / 10)
	{
		count = print_integer(arg, count);
		_putchar(val % 10 + '0');
		count ++;
	}
	else
	{
		_putchar(val + '0');
		count ++;
	}
	return (count);
}
