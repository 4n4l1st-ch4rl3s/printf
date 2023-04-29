#include "main.h"

/**
 * printf_string - prints string
 * @val: arguments
 * Return: len
 */

int printf_string(va_list val)
{
	char *p;
	int x, length;

	p = va_arg(val, char *);
	if (p == NULL)
	{
		p = "(null)";
		length = _strlen(p);
		for (x = 0; x < length; x++)
			_putchar(p[x]);
		return (length);
	}
	else
	{
		length = _strlen(p);
		for (x = 0; x < length; x++)
			_putchar(p[x]);
		return (length);
	}
}
