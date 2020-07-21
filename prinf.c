#include "holberton.h"
/**
 * _printf - prints input
 * @format: string
 * Return: int
 */
int _printf(const char *format, ...)
{
	unsigned int j = 0, len = 0;
	va_list ap;

	va_start(ap, 0);
	while (format[j])
	{
		if (format[j] != '%')
		{
			_putchar (format[j]);
		}
		else
		{
			if (format[j + 1] == 's')
			{
				len += print_str(va_arg(ap, char *));
				len -= 2;
				j++;
			}
			else if (format[j + 1] == 'c')
			{
				_putchar(va_arg(ap, int));
				len -= 1;
				j++;
			}
			else if (format[j + 1] == '%' && format[j + 1] != '\0')
			{
				_putchar('%');
				len -= 2;
				j += 1;
			}
			else if (format[j + 1] == 'd' || format[j + 1] == 'i' )
			{
				print_numbers(va_arg(ap, int));
				len -= 2;
				j += 1;
			}
		}
		j++;
	}
	len += _strlen(format);
	return (len);
}
