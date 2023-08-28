#include "main.h"
/**
 * print_string  - print string
 * @arg: argument
 * Return: count
 */
int print_string(va_list arg, int count)
{
	char *val = va_arg(arg, char *);
	int i = 0;
	while (val[i] != '\0')
	{
		_putchar(val[i]);
		count++;
		i++;
	}
	return (count);
}
