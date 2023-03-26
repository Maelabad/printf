#include "main.h"
/**
 * print_format_int - Print an Int.
 * @n: the number to display
 * @count: the numbers of digits
 * Return: Nothing
 */
void print_format_int(int n, int count)
{
    int div , i, j;

    for (i = count - 1; i >= 0; i--)
	{
		div = 1;
		for (j = i - 1; j >= 0; j--)
			div *= 10;
	    _putchar((n / div) % 10 + '0');
	}
}


/**
 * print_format_string - Print an string.
 * @str: the string to display
 * Return: Numbers of chars
 */
int print_format_string(char *str)
{
    int i = 0;
	while (*str)
	{
		putchar(*str);
		str++;
		i++;
	}
	return (i);
}