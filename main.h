#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
int  _putchar(char c);
int _printf(const char *format, ...);
int (*selector(char c))(va_list, int);
int print_char(va_list arg, int count);
int print_string(va_list arg, int count);
int print_decimal(va_list arg, int count);
int print_decimal_recursive(int val, int count); 
int print_integer(va_list arg, int count);
int print_binary(va_list arg, int count);
int print_unsigned_binary(unsigned int n, int count);
int print_unsigned_binary_recursive(unsigned int n, int count);
int print_modulus(void);
int print_unsigned_decimal(va_list arg, int count);
int print_unsigned_octal(va_list arg, int count);
int print_unsigned_hex(va_list arg, int count);
int print_unsigned_hex_upper(va_list arg, int count);
int print_spaces(va_list arg, int count);
#endif /* MAIN_H */
