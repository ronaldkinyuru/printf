#include "main.h"
/**
  * print_spaces - prints spaces
  * @arg: space to be printed
  * Return: count
  */
int print_spaces(va_list arg)
{
	int count = 0;
	int val = va_arg(arg, int);
		
	_putchar(val);
	count++;
	return (count);
}
