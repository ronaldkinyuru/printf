#include "main.h"
/**
 * print_string  - print string
 * @arg: argument
 * Return: count
 */
int print_string(va_list arg)
{
	int count = 0;
	char *val = va_arg(arg, char *);

	while (*val != '\0')
	{
		_putchar(*val);
		val++;
		count++;
	}
	return (count);
}
