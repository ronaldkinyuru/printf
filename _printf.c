#include "main.h"
/**
 * _printf - prints objects
 * @format: type
 * Return: 0
 */
int _printf(const char *format, ...)
{
	int count = 0;
	int i = 0;
	int spec = 0;
	va_list ap;

	va_start(ap, format);
	if (format[i] == '\0')
		return (-1);
	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%')
		{
			spec = format[i + 1];
			count = count + (*selector(spec))(ap);
		}
		else
		{
			_putchar(format[i]);
			count = count + 1;
		}
	}
	return (count);
}
