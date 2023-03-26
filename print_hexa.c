#include "main.h"
#include <stdio.h>
/**
 * int_to_hexa_X - Convert in hexa and prints it.
 * @arg: A list of arguments pointing to
 *       the character to be printed.
 * Return: Return numbers of elements printed
 */
int int_to_hexa_X(va_list arg)
{
	int decimal, remainder, i = 0, j;
	char hexadecimal[20];

	decimal = va_arg(arg, int);

	while (decimal != 0)
	{
		remainder = decimal % 16;

		if (remainder < 10)
		{
			hexadecimal[i] = remainder + 48;
		}
		else
		{
			hexadecimal[i] = remainder + 55;
		}

		decimal /= 16;
		i++;
	}
	j = i;
	for (j--; j >= 0; j--)
		_putchar(hexadecimal[j]);
	return (i);
}

/**
 * int_to_hexa_x - Convert in hexa and prints it.
 * @arg: A list of arguments pointing to
 *       the character to be printed.
 * Return: Return numbers of elements printed
 */
int int_to_hexa_x(va_list arg)
{
	int decimal, remainder, i = 0, j;
	char hexadecimal[20];

	decimal = va_arg(arg, int);

	while (decimal != 0)
	{
		remainder = decimal % 16;

		if (remainder < 10)
			hexadecimal[i] = remainder + 48;
		else
			hexadecimal[i] = remainder + 87;

		decimal /= 16;
		i++;
	}
	j = i;
	for (j--; j >= 0; j--)
		_putchar(hexadecimal[j]);
	return (i);
}

