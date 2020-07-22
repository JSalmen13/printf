#include "holberton.h"
/**
 * _printf - prints input
 * @format: string
 * Return: int
 */
int _printf(const char *format, ...)
{
	unsigned int j = 0, len = _strlen(format);
	va_list ap;
	char *s;

	va_start(ap, 0);
	while (format[j])
	{
		if (format[j] != '%')
			_putchar (format[j]);
		else
		{
			if (format[j + 1] == 's')
			{
				s = va_arg(ap, char *);
				if (s)
					len += print_str(s);
				else
					len += print_str("(null)");
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
			else if (format[j + 1] == 'd' || format[j + 1] == 'i')
			{
				print_numbers(va_arg(ap, int));
				len -= 2;
				j += 1;
			}
			else
				_putchar(format[j]);
		}
		j++;
	}
	return (len);
}
