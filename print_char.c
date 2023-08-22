#include "main.h"
/**
 * print_char - prints character
 * @arg: va_list
 * Return: count
 */
int print_char(va_list arg)
{
	int count = 0;
	char val = va_arg(arg, int);

	_putchar(val);
	count += 1;
	return (count);
}
