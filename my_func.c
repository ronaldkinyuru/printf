#include "main.h"
/*
   *
   *
   *
   */
int print_char(va_list arg)
{
	char val = va_arg(arg, int);
	_putchar(val);
	return 1;
}
int print_string(va_list arg)
{
	int cnt = 0;
	char *val = va_arg(arg, char *);
	while (*val != '\0')
	{
		my_print(*val);
		val++;
		cnt++
	}
	return (cnt);
}
