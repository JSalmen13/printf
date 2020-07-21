#include "holberton.h"
/**
 * print_str - print string
 * @s: string
 */
void print_str(char *s)
{
	int i = 0;

	s = "salmen";
	while (*s && s[i])
	{
		_putchar(s[i]);
		i++;
	}
	_putchar ('\n');
}
