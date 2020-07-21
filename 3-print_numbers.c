#include "holberton.h"
/**
*print_numbers - chek the code for Holberton School students.
*
* Return: Always 0.
*/
int print_numbers(int a)
{
    int i = 0;
    char s[100];

    while((a / 10) != 0)
    {
        s[i] = (a % 10 + '0');
        a = a / 10;
    }
    s[i] = (a + '0');
    i++;
    while(i >= 0)
    {
        _putchar(s[i]);
        i--;
    }
    return (i);
}
