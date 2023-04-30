#include "main.h"

/**
 * printf_srev - prints string in reverse
 * @args: arguments
 * Return: string in reverse
 */
int printf_srev(va_list args)
{

	char *p = va_arg(args, char*);
	int x;
	int y = 0;

	if (p == NULL)
		p = "(null)";
	while (p[y] != '\0')
		y++;
	for (x = y - 1; x >= 0; x--)
		_putchar(p[x]);
	return (y);
}
