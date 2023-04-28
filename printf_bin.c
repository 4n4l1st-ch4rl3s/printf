#include "main.h"

/**
 * printf_bin - prints binary number
 * @val: argument
 * Return: count
 */

int printf_bin(va_list val)
{
	int a = 0;
	int count = 0;
	int x, y = 1, z;
	unsigned int k = va_arg(val, unsigned int);
	unsigned int q;

	for (x = 0; x < 32; x++)
	{
		q = ((y << (31 - x)) & k);
		if (q >> (31 - x))
			a = 1;
		if (a)
		{
			z = q >> (31 - x);
			_putchar(z + 48);
			count++;
		}
	}
	if (count == 0)
	{
		count++;
		_putchar('0');
	}
	return (count);
}
