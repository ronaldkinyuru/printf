#include "main.h"
int print_decimal_recursive(int val, int count);
/**
 * print_decimal - print decimal
 * @arg: argument
 * Return: count
 */
int print_decimal(va_list arg)
{
	int count = 0;
	int val = va_arg(arg, int);

	if (val < 0)
	{
		_putchar('-');
		val = -val;
		count++;
	}
	if (val == 0)
	{
		_putchar('0');
		count++;
	}
	else
	{
	count = print_decimal_recursive(val, count);

	}
	return (count);
}
/**
  * print_decimal_recursive - prints decimal recurrsively
  * @val: value to be printed
  * @count: current count of digits printed
  * Return: updated count
  */
int print_decimal_recursive(int val, int count)
{
	if (val == 0)
	{
		return (count);
	}
	count = print_decimal_recursive(val / 10, count);
	_putchar('0' + (val % 10)); /* print each digit*/
	count++;
	return (count);
}
