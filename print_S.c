#include "main.h"
/**
* print_S - Print string and nonprintable ascii values
* @arg: An argument
* Return: number f printed characters
*/
int print_S(va_list arg)
{
        int count = 0, i;

        char *str = va_arg(arg, char *);
        if (str == NULL)
                str = "(null)";

        for (i = 0; str[i]; i++)
        {
                if (str[i] < 32 || str[i] >= 127)
                {  
                        _putchar('\\');
                        _putchar('x');
                        count += 2;
                        if (str[i] < 17)
                        {
                                _putchar('0');
                                count++;
                        }
                        count += print_hexa(str[i],55);
                }
                else
                {
                        _putchar(str[i]);
                        count++;
                }
        }
        return (count);
}


