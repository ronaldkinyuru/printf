#include "main.h"
/*
   *
   *
   *
   */
int print_char(va_list arg)
{
	int cnt = 0;
	char val = va_arg(arg, int);
	_putchar(val);
	cnt = cnt + 1;
	return (cnt);
}
int print_string(va_list arg)
{
	int cnt = 0;
	char *val = va_arg(arg, char *);
	while (*val != '\0')
	{
		_putchar(*val);
		val++;
		cnt++
	}
	return (cnt);
}
