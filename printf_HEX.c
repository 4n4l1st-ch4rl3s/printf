#include "main.h"

/**
 * printf_HEX - print num in hex
 * @val: argument
 * Return: count
 */

int printf_HEX(va_list val)
{
	int x;
	int *array;
	int count = 0;
	unsigned int num1 = va_arg(val, unsigned int);
	unsigned int num2 = num1;

	while (num1 / 16 != 0)
	{
		num1 /= 16;
		count++;
	}
	count++;
	array = malloc(count * sizeof(int));

	for (x = 0; x < count; x++)
	{
		array[x] = num2 % 16;
		num2 /= 16;
	}
	for (x = count - 1; x >= 0; x--)
	{
		if (array[x] > 9)
			array[x] = array[x] + 7;
		_putchar(array[x] + '0');
	}
	free(array);
	return (count);
}
