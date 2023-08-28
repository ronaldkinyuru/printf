#include "main.h"

/**
 * print_pointer - prints a hexadecimal number.
 * @arg: va_list containing the pointer argument.
 * Return: Number of characters printed.
 */
int printf_pointer(va_list arg)
{
	void *p = va_arg(arg, void*);
	unsigned long int a = (unsigned long int)p;
	int count = 0;
	
	_putchar('0');
	_putchar('x');
	count += 2;
	count += print_unsigned_hex(a);
}
