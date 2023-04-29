#include "main.h"

/**
 * printf_int - prints integer
 * @args: argument to print
 * Return: number of characters printed
 */

int printf_int(va_list args)
{
	int x = va_arg(args, int);
	int z, final = x % 10, digit, exp = 1;
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
			exp = exp * 10;
			z = z / 10;
		}
		z = x;
		while (exp > 0)
		{
			digit = z / exp;
			_putchar(digit + '0');
			z = z - (digit * exp);
			exp = exp / 10;
			y++;
		}
	}
	_putchar(final + '0');

	return (y);
}

/**
 * printf_dec - prints decimal
 * @args: argument to print
 * Return: number of characters printed
 */

int printf_dec(va_list args)
{
	int x = va_arg(args, int);
	int z, final = x % 10, digit;
	int  y = 1;
	int exp = 1;

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
			exp = exp * 10;
			z = z / 10;
		}
		z = x;
		while (exp > 0)
		{
			digit = z / exp;
			_putchar(digit + '0');
			z = z - (digit * exp);
			exp = exp / 10;
			y++;
		}
	}
	_putchar(final + '0');

	return (y);
}
