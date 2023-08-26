#include "main.h"
/*
 *
 *
 */
int print_modulus(va_list arg)
{
	char val = va_arg(arg, int); /* check arg type*/
	int count = 0;

	_putchar(val); /* check*/
	count ++;
	return (count);
}
