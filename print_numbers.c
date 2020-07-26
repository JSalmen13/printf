#include "holberton.h"
/**
* print_numbers - chek the code for Holberton School students.
* @a: int
* Return: Always 0.
*/
int print_numbers(int a)
{
	int i = 0;
	char s[100];

	while ((a / 10) != 0)
	{
		s[i] = (a % 10 + '0');
		i++;
		a = a / 10;
	}
	s[i] = (a + '0');
	i++;
	while (i > 0)
	{
		_putchar(s[i - 1]);
		i--;
	}
	return (i);
}
