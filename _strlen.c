#include "holberton.h"
/**
*_strlen - length
*@str: char
*Return:: a
*/
int _strlen(const char *str)
{
	int a = 0;

	while (*str != '\0' && str)
	{
		str++;
		a++;
	}
	return (a);
}
