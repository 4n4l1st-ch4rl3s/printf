#include "main.h"

/**
 * printf_hex - print num in hex
 * @val: arguments
 * Return: count
 */

int printf_hex(va_list val)
{
	int x;
	int *p;
	int count = 0;
	unsigned int num1 = va_arg(val, unsigned int);
	unsigned int num2 = num1;

	while (num1 / 16 != 0)
	{
		num1 /= 16;
		count++;
	}
	count++;
	p = malloc(count * sizeof(int));

	for (x = 0; x < count; x++)
	{
		p[x] = num2 % 16;
		num2 /= 16;
	}
	for (x = count - 1; x >= 0; x--)
	{
		if (p[x] > 9)
			p[x] = p[x] + 39;
		_putchar(p[x] + '0');
	}
	free(p);
	return (count);
}
