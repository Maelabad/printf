#include "main.h"
/**
 * print_char - Prints a char.
 * @arg: A list of arguments pointing to
 *       the character to be printed.
 * Return: Return 1
 */
int print_char(va_list arg)
{
	char letter;

	letter = (char) va_arg(arg, int);
	putchar(letter);
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
	int num, i, count = 0, temp, div, j, s = 0;

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

	for (i = count - 1; i >= 0; i--)
	{
		div = 1;
		for (j = i - 1; j >= 0; j--)
			div *= 10;

		_putchar((num / div) % 10 + '0');
	}
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
	int i = 1;

	str = va_arg(arg, char *);

	if (str != NULL)
	{
		while (*str)
		{
			putchar(*str);
			str++;
			i++;
		}
	}
	return (i);
}

