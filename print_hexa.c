#include "main.h"
/**
 * print_hexa - Convert in hexa and prints it.
 * @decimal: the numbers to prints
 * @x: 55 for X and 87 for x
 * Return: Return numbers of elements printed
 */
int print_hexa(int decimal, int x)
{
	int remainder, i = 0, j;
	char hexadecimal[20];

	while (decimal != 0)
	{
		remainder = decimal % 16;
		if (remainder < 10)
			hexadecimal[i] = remainder + 48;
		else
			hexadecimal[i] = remainder + x;
		decimal /= 16;
		i++;
	}
	j = i;
	for (j--; j >= 0; j--)
	_putchar(hexadecimal[j]);
	return (i);
}


/**
 * int_to_hexa_X - Sent a number to a function whose
 * convert in hexa and prints it.
 * @arg: A list of arguments pointing to
 *       the character to be printed.
 * Return: Return numbers of elements printed
 */
int int_to_hexa_X(va_list arg)
{
	int decimal;

	decimal = va_arg(arg, int);
	return (print_hexa(decimal, 55));
}


/**
 * int_to_hexa_x - Sent a number to a function whose
 * convert in hexa and prints it.
 * @arg: A list of arguments pointing to
 *       the character to be printed.
 * Return: Return numbers of elements printed
 */
int int_to_hexa_x(va_list arg)
{
	int decimal;

	decimal = va_arg(arg, int);

	return (print_hexa(decimal, 87));
}
