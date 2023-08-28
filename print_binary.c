#include "main.h"

/**
 * print_binary - Print an unsigned integer in binary format.
 * @arg: A va_list with the integer to print.
 * @count: The current count of characters printed.
 *
 * Return: The updated count of characters printed.
 */
int print_binary(va_list arg, int count)
{
	unsigned int n = va_arg(arg, unsigned int);

	count = print_unsigned_binary(n, count);

	return count;
}

/**
 * print_unsigned_binary - Print an unsigned integer in binary format.
 * @n: The unsigned integer to print.
 * @count: The current count of characters printed.
 *
 * Return: The updated count of characters printed.
 */
int print_unsigned_binary(unsigned int n, int count)
{
	if (n == 0)
	{
		_putchar('0');
		count++;
	}
	else
	{
		count = print_unsigned_binary_recursive(n, count);
	}

	return count;
}

/**
 * print_unsigned_binary_recursive - Recursively print an unsigned integer in binary format.
 * @n: The unsigned integer to print.
 * @count: The current count of characters printed.
 *
 * Return: The updated count of characters printed.
 */
int print_unsigned_binary_recursive(unsigned int n, int count)
{
	if (n == 0)
	{
		return count;
	}

	count = print_unsigned_binary_recursive(n / 2, count);
	_putchar('0' + (n % 2));
	count++;

	return count;
}

