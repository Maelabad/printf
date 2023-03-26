#include "main.h"
/**
 * print_r - Prints a string in reverse.
 * @arg: A list of arguments
 * Return: The numbers of elements display
 */
int print_r(va_list arg)
{
        char *str;
        int i = 0, count = 0;

        str = va_arg(arg, char *);
        if (str == NULL)
                str = ")llun(";
        while (str[i])
                i++;	
        for (i -= 1; i >= 0; i--)
        {
                _putchar(str[i]);
                count++;
        }
        return (count);
}