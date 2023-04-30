#include "main.h"

/**
 * _printf - print whatever argument is fed.
 * @format: format identifier
 * Return: len
 */

int _printf(const char * const format, ...)
{
	convert_match m[] = {
		{"%s", printf_string}, {"%c", printf_char},
		{"%%", printf_37},
		{"%i", printf_int}, {"%d", printf_dec}, {"%r", printf_srev},
		{"%R", printf_rot13}, {"%b", printf_bin}, {"%u", printf_unsigned},
		{"%o", printf_oct}, {"%x", printf_hex}, {"%X", printf_HEX},
		{"%S", printf_exclusive_string}, {"%p", printf_pointer}
	};

	va_list args;
	int x = 0, j, lenght = 0;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

Here:
	while (format[x] != '\0')
	{
		j = 13;
		while (j >= 0)
		{
			if (m[j].id[0] == format[x] && m[j].id[1] == format[x + 1])
			{
				lenght += m[j].f(args);
				x = x + 2;
				goto Here;
			}
			j--;
		}
		_putchar(format[x]);
		lenght++;
		x++;
	}
	va_end(args);
	return (lenght);
}
