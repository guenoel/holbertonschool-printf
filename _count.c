#include "main.h"

/**
 * _count - count the characters numbers 
 * @:variable 
 * Return:int
 */

int _count(const char *c)
{
	int i;
		i = 0;
		while (c[i] !='\0')
		{
			i++;
		}
		return (i);
}
