#include "main.h"
/**
  * print_unsigned_decimal - prints unsigned decimal
  * @arg: arguments
  * Return: count
  */
int print_unsigned_decimal(va_list arg)
{
	int count;
	unsigned long int val = va_arg(arg, unsigned long int);


