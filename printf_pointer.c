#include "main.h"

/**
 * printf_pointer - prints hex number
 * @val: argument
 * Return: count
 */
int printf_pointer(va_list val)
{
	void *q;
	char *c = "(nil)";
	long int x;
	int y;
	int z;

	q = va_arg(val, void*);
	if (q == NULL)
	{
		for (z = 0; c[z] != '\0'; z++)
		{
			_putchar(c[z]);
		}
		return (z);
	}

	x = (unsigned long int)q;
	_putchar('0');
	_putchar('x');
	y = printf_hex_aux(x);
	return (y + 2);
}
