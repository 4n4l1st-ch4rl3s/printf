#include "main.h"

/**
 * printf_rot13 - rotates a string 13 times ROT13
 * @args: arguments
 * Return: no of rot
 *
 */

int printf_rot13(va_list args)
{
	int x, y, count = 0;
	int z = 0;
	char *c = va_arg(args, char*);
	char no_rot[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char rotated[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};

	if (c == NULL)
		c = "(null)";
	for (x = 0; c[x]; x++)
	{
		z = 0;
		for (y = 0; no_rot[y] && !z; y++)
		{
			if (c[x] == no_rot[y])
			{
				_putchar(rotated[y]);
				count++;
				z = 1;
			}
		}
		if (!z)
		{
			_putchar(c[x]);
			count++;
		}
	}
	return (count);
}
