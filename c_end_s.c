#include "main.h"

/**
 * c_end_s - fonction de comptage du nombres de \0
 *
 * @s:string
 * @n: nombre
 * @i: nombre de \0
 *
 * Return: i
 */

int c_end_s(char *s)
{
	int i;
	long unsigned int n;

	i = 0;
	for (n = 0; n < sizeof(s); n++)
	{
		if (s[n] == '\0')
			i++;
	}
	return (i);
}
