#include "main.h"

/**
 * printf_unsigned - print integer
 * @args: argument
 * Return: y
 */

int printf_unsigned(va_list args)
{
	unsigned int x = va_arg(args, unsigned int);
	int z, final = x % 10, digit, k = 1;
	int  y = 1;

	x = x / 10;
	z = x;

	if (final < 0)
	{
		_putchar('-');
		z = -z;
		x = -x;
		final = -final;
		y++;
	}
	if (z > 0)
	{
		while (z / 10 != 0)
		{
			k = k * 10;
			z = z / 10;
		}
		z = x;
		while (k > 0)
		{
			digit = z / k;
			_putchar(digit + '0');
			z = z - (digit * k);
			k = k / 10;
			y++;
		}
	}
	_putchar(final + '0');

	return (y);
}
