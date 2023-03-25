#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_char - Prints a char.
 * @arg: A list of arguments pointing to
 *       the character to be printed.
 * Return: Return 1
 */
int print_char(va_list arg)
{
	char letter;

	letter = va_arg(arg, int);
	_putchar(letter);
	return (1);
	/*printf("%c", letter);*/
}

/**
 * print_int - Prints an int.
 * @arg: A list of arguments pointing to
 *       the integer to be printed.
 * Return: The numbers of elements display
 */
int print_int(va_list arg)
{
	int num, i, count = 0, temp, div, j;

	num = va_arg(arg, int);

	temp = num;
	while (temp != 0)
	{
		count++;
		temp /= 10;
	}


	for (i = count - 1; i >= 0; i--)
	{
		div = 1;
		for (j = i - 1; j >= 0; j--)
			div *= 10;

		_putchar((num / div) % 10 + '0');
	}
	return (count);
}


/**
 * print_string - Prints a string.
 * @arg: A list of arguments pointing to
 *       the string to be printed.
 * Return: The numbers of elements of the string
 */
int print_string(va_list arg)
{
	char *str;
	int i = 1;

	str = va_arg(arg, char *);

	if (str != NULL)
	{
		while (*str)
		{
			_putchar(*str);
			str++;
			i++;
		}

	}
	return (i);
}



/**
 * _print - Prints anything, followed by a new line.
 * @format: A string of characters representing the argument types.
 * @...: A variable number of arguments to be printed.
 *
 * Description: Any argument not of type char, int, float,
 *              or char * is ignored.
 *              If a string argument is NULL, (nil) is printed instead.
 */
int _printf(const char * const format, ...)
{
	va_list args;
	int i = 0, j = 0, val = 0;

	char *separator = "";

	Print funcs[] = {
		{"c", print_char}, {"s", print_string},
		/*As the formats d and i both refer to int*/{"i", print_int}, {"d", print_int} };

	va_start(args, format);
	while (format && (*(format + i)))
	{
		j = 0;
		if ((*(format + i) == '%'))
		{
			while (j < 4 && (*(format + i + 1) != *(funcs[j].format)))
				j++;
		}
		if (j < 4 && j != 0)
		{
			printf("%s", separator); /*A supprimer*/
			val += funcs[j].p(args);
			i++;
		}
		else
		{
			_putchar(*(format + i));
			val++;
		}
		i++;
	}
	_putchar('\n');
	va_end(args);
	return (val);
}

