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
	char spec = 0;
	va_list ap;

	va_start(ap, format);
	if (format[i] == '\0')
		return (-1);
	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%')
		{
			i++;
			spec = format[i];
			if (spec != '\0')
			{
				int (*print_function)(va_list) = selector(spec);
				if (print_function != NULL)
				{
					count = count + print_function(ap);
				}
			}
			else
			{
				_putchar(format[i]);
				count = count + 1;
			}
		}
	}
	va_end(ap);
	return (count);
}
