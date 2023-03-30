#include "main.h"
/**
 * print_format_u - Prints a char.
 * @arg: A list of arguments pointing to
 *       the character to be printed.
 * Return: Return a number of digits
 */
int print_format_u(va_list arg)
{
	unsigned int u, temp, count = 0;

	u = va_arg(arg, unsigned int);
	temp = u;
	while (temp != 0)
	{
		count++;
		temp /= 10;
	}
	print_format_int(u, count);
	return (count);
}


/**
 * print_format_o - Prints an int.
 * @arg: A list of arguments pointing to
 * Return: The numbers of elements display
 */
int print_format_o(va_list arg)
{
	char *octal;
	unsigned int decimal, r;
	int i = 0, j;

	octal = malloc(sizeof(char) * 16);

	decimal = va_arg(arg, unsigned int);
	while (decimal != 0)
	{
		r = decimal % 8;
		octal[i++] = r + '0';
		decimal /= 8;
	}

	for (j = i - 1; j >= 0; j--)
		_putchar(octal[j]);

	return (i);
}
