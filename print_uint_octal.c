#include "main.h"
/**
 * print_format_u - Prints a char.
 * @arg: A list of arguments pointing to
 *       the character to be printed.
 * Return: Return a number of digits
 */
int print_format_u(va_list arg)
{
	unsigned int u;
    int count = 0, temp;

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
	int o = 0, decimal, i, r, temp, count = 0;

	decimal = va_arg(arg, int);
    for (i = 1; decimal != 0; i *= 10)
    {
        r = decimal % 8;
        decimal /= 8;
        o += r * i;
    }

    temp = o;
    while (temp != 0)
	{
		count++;
		temp /= 10;
	}
    print_format_int(o, count);
    return (count);
}
