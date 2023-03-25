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
int print_char(va_list arg);
int print_int(va_list arg);

int int_to_binary(unsigned int n);
void print_binary(unsigned int *binary,int size);

int print_float(va_list arg);
int print_string(va_list arg);
int _printf(const char * const format, ...);


#endif
