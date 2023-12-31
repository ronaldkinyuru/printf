#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
int  _putchar(char c);
int _printf(const char *format, ...);
int (*selector(char c))(va_list);
int print_char(va_list arg);
int print_string(va_list arg);
int print_decimal(va_list arg);
int print_integer(va_list arg);
int print_binary(va_list arg);
int print_modulus(va_list arg);
int print_unsigned_decimal(va_list arg);
int print_unsigned_octal(va_list arg);
int print_unsigned_hex(va_list arg);
int print_unsigned_hex_upper(va_list arg);
int print_spaces(va_list arg);
int print_pointer(va_list arg);
#endif /* MAIN_H*/
