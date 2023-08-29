## _printf() > In this project, we recreated a mini-verison of the ```printf``` function found in > the ```stdio.h``` library in the C programming language. This function allows > us to print any argument given to the standard output or terminal and similar > printing functions can be found in any programming language. This means we can > print any combinations of strings, intergers, and other different data types.
Synopsis
This repository holds all the code necessary for our custom _printf function to run. Our mini-version currently handles conversion specifiers: c, s, %, d, i, b, o and does not yet support field width, precision, flag characters, or length modifiers. Unique to our _printf is our r reverse conversion and the R rot13 conversion. In essence, you can print any character, string, integer, or decimal number, reverse your strings, transform any number to binary and octal bases, and encrypt your string with rot13 encryption.

Description of what each file shows:
man_3_printf ----------------------- custom manpage for custom _printf function
_printf.c ---------------------------- holds custom _printf function
main.h ------------------------ holds prototypes of functions spread across all files
selector.c ----- holds functions to get appropriate function, and create and write buffer
print_string.c --------------------------- handles %s to print a string of characters
print_char.c ----------------------------- handles %c to print a single character
print_decimal.c -------------------------- handles %d and %i to print (d)ecimal/(i)ntegers in base 10
print_binary.c --------------------------- handles %b to convert numbers passed into base 2
print_octal.c ---------------------------- handles %o to convert numbers passed into base 8
Environment
Language: C
OS: Ubuntu 14.04 LTS
Compiler: gcc 4.8.4
Style guidelines: Betty style
How To Install & Compile
(terminal)$ git clone https://github.com/MelissaN/printf.git
(terminal)$ cd printf
Sample main program inside print.c:

int main(void)
{
		_printf("%s %c%drld", "Hello", "W", 0);
			return (0);
}
====================================
(terminal)$ gcc -Wall -Werror -Wextra -pedantic -Wno-format *.c -o print
(terminal)$ ./print
Hello W0rld
(terminal)$
To Do
The main _printf function can be separated into more modular shorter functions
More functionality can still be added (e.g. support field width specifiers, etc)
