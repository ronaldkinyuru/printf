#include "main.h"
/**
 * print_char - prints character
 * @arg: va_list
 * Return: count
 */
int print_char(va_list arg, int count)
{
	char val = va_arg(arg, int);

	_putchar(val);
	count++;
	return (count);
}
