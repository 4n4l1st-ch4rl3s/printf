#include "main.h"

/**
 * printf_HEX_aux - prints num in hexadecimal format
 * @num: parameter
 * Return: count
 */

int printf_HEX_aux(unsigned int num)
{
	int x;
	int *p;
	int count = 0;
	unsigned int num2 = num;

	while (num / 16 != 0)
	{
		num /= 16;
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
			p[x] = p[x] + 7;
		_putchar(p[x] + '0');
	}
	free(p);
	return (count);
}
