#include "main.h"
/**
 * selector - selects and returns functio
 * @c: format specifier
 * Return: pointer to the appropriate formatting function
 */
int (*selector(char c))(va_list)
{
	if (c == 'c')
	{
		return (&print_char);
	}
	else if (c == 's')
	{
		return (&print_string);
	}
	else if (c == 'd')
	{
		return (&print_integer); /* check*/
	}
	else if (c == 'i')
	{
		return (&print_integer);
	}
	else if (c == 'b')
	{
		return (&print_binary);
	}else if (c == '%')
	{
		return (&print_modulus);
	}
	return (NULL);
}
