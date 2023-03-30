#include "main.h"
/**
 * _printf - Prints anything, followed by a new line.
 * @format: A string of characters representing the argument types.
 * @...: A variable number of arguments to be printed.
 *
 * Return: The number of elements
 */
int _printf(const char * const format, ...)
{
	va_list args;
	int i = 0, j = 0, val = 0, spe = 0;
	Print funcs[] = {
		{"c", print_char}, {"s", print_string}, {"i", print_int}
		, {"d", print_int}, {"b", int_to_binary}, {"u", print_format_u},
		{"o", print_format_o}, {"x", int_to_hexa_x}, {"X", int_to_hexa_X},
		{"S", print_S}, {"r", print_r}, {"R", print_rot}
	};

	va_start(args, format);
	while (format && (*(format + i)))
	{
		j = 0;
		if ((*(format + i) == '%') || spe == 1)
		{
			while (j < 11 && (*(format + i + 1) != *(funcs[j].format)))
				j++;
			if (j < 11)
			{
				val += funcs[j].p(args);
				spe = 0;
				i++;
			}
			else
				val += print_special_char(*(format + i + 1), &spe, *(format + i + 2));
		}
		else
		{
			_putchar(*(format + i));
			val++;
		}
		i++;
	}
	va_end(args);
	return (val);
}
