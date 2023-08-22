#include "main.h"
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
	_putchar(val);
	count += 1;
	return (count);
}
