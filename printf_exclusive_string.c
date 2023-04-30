#include "main.h"

/**
 * printf_exclusive_string - Entry point
 * @val: parameter
 * Return: len of string
 */

int printf_exclusive_string(va_list val)
{
	char *c;
	int x, len = 0;
	int z;

	c = va_arg(val, char *);
	if (c == NULL)
		c = "(null)";
	for (x = 0; c[x] != '\0'; x++)
	{
		if (c[x] < 32 || c[x] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			len = len + 2;
			z = c[x];
			if (z < 16)
			{
				_putchar('0');
				len++;
			}
			len = len + printf_HEX_aux(z);
		}
		else
		{
			_putchar(c[x]);
			len++;
		}
	}
	return (len);
}
