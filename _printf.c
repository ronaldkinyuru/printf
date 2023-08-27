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
	char spec;
	va_list ap;

	if (format == NULL)
	{
		return (-1);
	}
	va_start(ap, format);
	i = 0; 
	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			count++;
		}
		else
		{
			i++;
			spec =  format[i];
			if (spec != '\0')
			{
				int (*print_function)(va_list) = selector(spec);
				if (print_function != NULL)
				{
					count = count + print_function(ap);
				}
			}
		}
		i++;
	}
	va_end(ap);
	return (count);
}
