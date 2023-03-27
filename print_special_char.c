#include "main.h"

/**
 * print_spe_1 - check if the we can use '+' or ' ' specifier
 * @c: the char to prints
 * @suiv: the following char
 * Return: Nothing
 *
 */
int print_spe_1(char c, char suiv)
{
	int i = 0;
	char spe[6] = {'d', 'i', 'u', 'o', 'x', 'X'};

	for (i = 0; i < 6; i++)
	{
		if (spe[i] == suiv)
		{
			_putchar(c);
			break;
		}
	}
	if (i == 6)
		exit(EXIT_FAILURE);
	return (1);
}



/**
 * print_spe_2 - check if the we can use '#' specifier
 * @suiv: the following char
 * Return: Nothing
 *
 */
int print_spe_2(char suiv)
{
	int sum = 0;

	_putchar('0');
	if (suiv == 'x' || suiv == 'X')
	{
		_putchar('x');
		sum = 2;
	}
	else if (suiv == 'o')
		sum = 2;
	else
	{
		exit(EXIT_FAILURE);
	}
	return (sum);
}




/**
 * print_special_char - Hold the print of special char
 * @c: the char to prints
 * @spe: Take the value of 0 or 1
 *    if 0 then we should just print the char
 *    else we should print  the char and what follow
 * @suiv: the next character
 * Return: The sum of chars printed
 *
 */
int print_special_char(char c, int *spe, char suiv)
{
	int res = 0;

	switch (c)
	{
		case '%':
			_putchar('%');
			*spe = 0;
			res = 1;
			break;
		case '+':
			res = print_spe_1('+', suiv);
			*spe = 1;
			break;

		case ' ':
			res = print_spe_1(' ', suiv);
			*spe = 1;
			break;

		case '#':
			print_spe_2(suiv);
			*spe = 1;
			res = 2;
			break;

		default:
			_putchar(c);
			res = 1;
			break;
	}
	return (res);
}
