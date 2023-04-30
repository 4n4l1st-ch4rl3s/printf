#include "main.h"

/**
 * _strlen - prints length of the string
 * @s: pointer
 * Return: the number of characters
 */

int _strlen(char *s)
{
	int p;

	for (p = 0; s[p] != 0; p++)
		;
	return (p);

}

/**
 * _strlenc - returns lenght of the string for constant
 * @s: pointer to character
 * Return: the lenght of the strings
 */

int _strlenc(const char *s)
{
	int p;

	for (p = 0; s[p] != 0; p++)
		;
	return (p);
}
