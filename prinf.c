#include "holberton.h"
/**
 *
 *
 *
 */
int _printf(const char *format, ...)
{
    unsigned int i = 0;

    for (; format[i] != '\0'; i++)
        _putchar (format[i]);
}