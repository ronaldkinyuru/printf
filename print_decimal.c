#include "main.h"
int print_decimal_recursive(int val, int count);
/**
 * print_decimal - print decimal
 * @arg: argument
 * Return: count
 */
int print_decimal(va_list arg)
{
	int count = 0;
	int val = va_arg(arg, int);
	/**
	 * char buffer[20];  // Adjust the buffer size as needed
	 *sprintf(buffer, "%d", val);  // Convert int to string
	 * int i = 0;
	 * while (buffer[i] != '\0') {
	 * putchar(buffer[i]);
	 * count++;
	 * i++;
	 * }
	 */ 
	if (val < 0)
	{
		_putchar('-');
		val = -val;
		count++;
	}
	if (val == 0)
	{
		_putchar(0);
		count++;
	}
	else
	{
	count = print_decimal_recursive(val, count);

	}
	return (count);
}
int print_decimal_recursive(int val, int count)
{
	if (val == 0)
	{
		return count;
	}
	count = print_decimal_recursive(val / 10, count);
	_putchar('0' + (val % 10)); /* print each digit*/
	count++;
	return count;
}
