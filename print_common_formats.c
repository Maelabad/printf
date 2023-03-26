#include "main.h"
/**
 * print_char - Prints a char.
 * @arg: A list of arguments
 * Return: Return 1
 */
int print_char(va_list arg)
{
	char letter;

	letter = (char) va_arg(arg, int);
	_putchar(letter);
	return (1);
}


/**
 * print_int - Prints an int.
 * @arg: A list of arguments
 * Return: The numbers of elements display
 */
int print_int(va_list arg)
{
	int num, count = 0, temp, s = 0;

	num = va_arg(arg, int);
	temp = num;
	while (temp != 0)
	{
		count++;
		temp /= 10;
	}
	if (num < 0)
	{
		num = -num;
		_putchar('-');
		s = 1;
	}
	print_format_int(num, count);
	return (count + s);
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

	str = va_arg(arg, char *);
	if (str == NULL)
		str = "(null)";
	return (print_format_string(str));
}
