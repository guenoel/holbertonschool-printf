#include "main.h"

/**
 * _putstring - writes a variable lenght of char
 * @s: string to print
 *
 * Return: number of char printed
 */

int _putstring(char* s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		_putchar(s[i]);
	return (i);
}
