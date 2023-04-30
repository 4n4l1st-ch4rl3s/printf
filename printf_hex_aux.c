#include "main.h"

/**
 * printf_hex_aux - print no in hexadecimal
 * @num: parameter number
 * Return: count
 */

int printf_hex_aux(unsigned long int num)
{
	long int x;
	long int *p;
	long int count = 0;
	unsigned long int num2 = num;

	while (num / 16 != 0)
	{
		num /= 16;
		count++;
	}
	count++;
	p = malloc(count * sizeof(long int));

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
