#include "main.h"
/*
 *
 *
 */
int print_modulus(va_list arg)
{
	char val = va_arg(arg, int);
	int count = 0;

	_putchar(val);
	count ++;
	return (count);
}
