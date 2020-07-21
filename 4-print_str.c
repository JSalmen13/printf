#include "holberton.h"
/**
 * print_str - print string
 * @s: string
 * Return: all
 */
int print_str(char *s)
{
	int i = 0;

	while (*s && s[i])
	{
		_putchar(s[i]);
		i++;
	}
	return (i);
}
