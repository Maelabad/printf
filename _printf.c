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
	int i = 0, j = 0, val = 0;
	Print funcs[] = {
		{"c", print_char}, {"s", print_string},
		/*As the formats d and i both refer to int*/
		{"i", print_int}, {"d", print_int}, {"b", int_to_binary}
	};

	va_start(args, format);
	while (format && (*(format + i)))
	{
		j = 0;	
		if ((*(format + i) == '%'))
		{
			while (j < 4 && (*(format + i + 1) != *(funcs[j].format)))
				j++;
			if (j < 5)
			{	
				val += funcs[j].p(args);
				i++;
			}
			else
			{
				_putchar(*(format + i));
				val++;
			}
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

