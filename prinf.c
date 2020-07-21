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
			if (format[j + 1] == 'c')
			{
				_putchar(va_arg(ap, int));
				len -= 1;
				j++;
			}
		}
		j++;
	}
	len += _strlen(format);
	return (len);
}
