#include "main.h"
#include <stdio.h>
/**
 * int_to_binary - Prints a binary.
 * @arg: A list of arguments pointing to
 *       the character to be printed.
 * Return: Return numbers of elements printed
 */
int int_to_binary(va_list arg)
{
	unsigned int n;
	unsigned int binaryNum[64];
	int i = 0;

	n = va_arg(arg, unsigned int);


	if (n == 0)
	{
		_putchar(0 + '0');
		return (1);
	}

	for (; n > 0; )
	{
		binaryNum[i++] = n % 2;
		n /= 2;
	}

	print_binary(binaryNum, i);
	return (i);
}

/**
 * print_binary - Print a binary number
 * @binary: An array of 0/1
 * @size: The numbers of bytes
 * Return: Nothing
 */
void print_binary(unsigned int *binary, int size)
{
	int j = 0;

	for (j = size - 1; j >= 0; j--)
	{
		_putchar(binary[j] + '0');
	}
}

