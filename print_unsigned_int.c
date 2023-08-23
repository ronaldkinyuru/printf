#include "main.h"

/**
 * print_binary - prints unsigned int conversion to binary
 * @arg: argument
 * Return: count
 */
int print_binary(va_list arg)
{
	int count = 0;
	unsigned int val = va_arg(arg, unsigned int);
	int i;
	int binary[32];/*binary array store*/

	/*Convert the integer to binary representation using an array*/
	for (i = 0; i < 32; i++)
	{
		binary[i] = val % 2;
		val /= 2;
	}

	/*Print the binary representation*/
	for (i = 31; i >= 0; i--)
	{
		_putchar(binary[i] + '0');
		count++;
	}

	return (count);
}
