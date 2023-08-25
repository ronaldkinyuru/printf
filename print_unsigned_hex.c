#include "main.h"
/**
  * print_hex - prints unsigned hexadecimal
  * @arg: arguments
  * Return: count
  */
int print_hex(va_list arg)
{
	int i = 0, j, count = 0;
	int hex[100];
	unsigned int val = va_arg(arg, unsigned int);

	if  (val == NULL)
	{
		return (-1);
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
			if (uppercase)
			{
				hex[i] = remainder - 10 + 'A';
			}
			else
			{
				hex[i] = remainder - 10 + 'a';
			}
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
		for (int j = i - 1; j >= 0;; j--)
		{
			_putchar(hex[j]);
			count++;
		}
	}
	return (count);

}
