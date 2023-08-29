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

	/*calculate number of bits required for the binary representation*/
	int num_bits = 0;
	unsigned int temp_val = val;

	while (temp_val > 0)
	{
		temp_val /= 2;
		num_bits++;
	}
	/*Convert the integer to binary representation using an array*/
	for (i = 0; i < num_bits; i++)
	{
		binary[i] = val % 2;
		val /= 2;
	}

	/*Print the binary representation*/
	for (i = num_bits - 1; i >= 0; i--)
	{
		if (binary[i] == 1)
		{
			_putchar(binary[i] + '0');
			count++;
		}
	}
	if (count == 0)
	{
		_putchar('0');
		count++;
	}

	return (count);
}
