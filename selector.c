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
		return (&print_decimal); /* check*/
	}
	else if (c == 'i')
	{
		return (&print_decimal);
	}
	else if (c == 'b')
	{
		return (&print_binary);
	}
	else if (c == 'x')
	{
		return (&print_unsigned_hex);
	}
	else if (c == 'X')
	{
		return (&print_unsigned_hex_upper);
	}
	else if (c == 'p')
	{
		return (&print_pointer);
	}
	else if (c == 'o')
	{
		return (&print_unsigned_octal);
	}
	else if (c == 'u')
	{
		return (&print_unsigned_decimal);
	}
	else if (c == ' ')
	{
		return (&print_spaces);
	}
	else if (c == 37)
	{
		return (&print_modulus);
	}

	return (NULL);
}
