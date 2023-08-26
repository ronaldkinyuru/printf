#include "main.h"
/**
  * print_octal - deal with o
  * @arg: ocatl to be printed
  * Return: count
  */
int print_octal(va_list, arg)
{
	int octal[100], i = 0, j;

	while (num != 0)
	{
		int remainder = val % 8;
		octal[i] = remainder + 48;
		i++;
		val /= 8;
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
			_putchar(octal[j]);
			count++;
		}
	}
	return (count);
}
