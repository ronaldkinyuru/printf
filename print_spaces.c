#include "main.h"
/**
  * print_spaces - prints spaces
  * @arg: space to be printed
  * Return: count
  */
int print_spaces(va_list arg, int count)
{
	int num_spaces = va_arg(arg, int);
	int i;
	for (i = 0; i < num_spaces; i++)
	{
		_putchar(' ');
		count++;
	}
	return (count);
}
