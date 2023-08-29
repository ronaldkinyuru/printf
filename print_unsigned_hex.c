#include "main.h"
/**
 * print_unsigned_hex - prints unsigned hexadecimal
 * @arg: arguments
 * Return: count
 */
int print_unsigned_hex(va_list arg)
{
	int i = 0, count = 0, j;
	char hex[100]; /* from int */
	unsigned int val = va_arg(arg, unsigned int);

	if  (val == 0)
	{
		_putchar('0');
		count++;
		return (count);
	}
	while (val > 0)
	{
		int remainder = val % 16;

		if (remainder < 10)
		{
			hex[i] = remainder + '0';
		}
		else
		{
			hex[i] = remainder - 10 + 'a';
		}
		i++;
		val /= 16;
	}
	if (i == 0)
	{
		_putchar('0');
		count++;
	}
	else
	{
		for (j = i - 1; j >= 0; j--)
		{
			_putchar(hex[j]);
			count++;
		}
	}
	return (count);

}
/**
 * print_unsigned_hex_upper -prints upper hex
 * @arg: the argument
 * Return: count
 */
int print_unsigned_hex_upper(va_list arg)
{
	int i = 0, count = 0, j;
	char hex[100]; /* from int */
	unsigned int val = va_arg(arg, unsigned int);

	if  (val == 0)
	{
		_putchar('0');
		count++;
		return (count);
	}
	while (val > 0)
	{
		int remainder = val % 16;

		if (remainder < 10)
		{
			hex[i] = remainder + '0';
		}
		else
		{
			hex[i] = remainder - 10 + 'A';
		}
		i++;
		val /= 16;
	}
	if (i == 0)
	{
		_putchar('0');
		count++;
	}
	else
	{
		for (j = i - 1; j >= 0; j--)
		{
			_putchar(hex[j]);
			count++;
		}
	}
	return (count);

}
