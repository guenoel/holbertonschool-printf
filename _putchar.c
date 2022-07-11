#include "main.h"

/**
 * _putchar - writes a variable lenght of char
 * @n: number of char
 * @s: string to print
 *
 * Return: int to reproduce printf
 */

int _putchar(char c)
{
	/*
	int n, i;
	int* s2;

	n = _count(s);
	s2 = malloc(sizeof(int)*n);
	for (i = 0; i != '\0'; i++)
		s2[i] = (int)s[i];
	return (write(1, &s2, (n*4)));
	*/
	return (write(1, &c, 1));
}
