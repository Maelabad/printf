#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>


/**
 * struct print - A new struct type defining a printer.
 * @format: A symbol representing a data type.
 * @p: A function pointer to a function that prints
 *         a data type corresponding to symbol.
 */
typedef struct print
{
	char *format;
	int (*p)(va_list arg);

} Print;


int _putchar(char c);


/*PRINT_COMMON_FORMATS.C*/
int print_char(va_list arg);
int print_int(va_list arg);
int print_string(va_list arg);


/*PRINT_INT_STRING.C*/
void print_format_int(int n, int count);
int print_format_string(char *str);

/*PRINT_BINARY.C*/
int int_to_binary(va_list arg);
void print_binary(unsigned int *binary,int size);

/*PRINT_UINT_OCTAL.C*/
int print_format_u(va_list arg);
int print_format_o(va_list arg);

/*PRINT_HEXA.C*/
int int_to_hexa_x(va_list arg);
int int_to_hexa_X(va_list arg);




int print_float(va_list arg);

int _printf(const char * const format, ...);


#endif
