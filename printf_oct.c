#include "main.h"

/**
 * printf_oct - print oct number
 * @val: argument
 * Return: count
 */

int printf_oct(va_list val)
{
	int x;
	int *array;
	int count = 0;
	unsigned int num1 = va_arg(val, unsigned int);
	unsigned int temp = num1;

	while (num1 / 8 != 0)
	{
		num1 /= 8;
		count++;
	}
	count++;
	array = malloc(count * sizeof(int));

	for (x = 0; x < count; x++)
	{
		array[x] = temp % 8;
		temp /= 8;
	}
	for (x = count - 1; x >= 0; x--)
	{
		_putchar(array[x] + '0');
	}
	free(array);
	return (count);
}
