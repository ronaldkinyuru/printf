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

	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%')
		{
			i++;
			spec = format[i + 1];
			if (spec != '\0')
			{
				int (*print_function)(va_list) = selector(spec)
					;
				if (print_function != NULL)
				{
					count += print_function(ap);
				}
			}
		}
		else
		{
			_putchar(format[i]);
			count++;
		}
	}

	va_end(ap);
	return (count);
}
