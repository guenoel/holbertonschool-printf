#include "main.h"

int printchar(va_list args)
{
	_putchar(va_arg(args, int));
	return (1);
}

int printstring(va_list args)
{
	int i;
	char* s;

	s = va_arg(args, char*);
	for(i = 0; s[i] != '\0'; i++)
	_putchar(s[i]);
	_putchar(s[i]);
	return (i + 1);
}

int printint(va_list args)
{
	int i;

	i = (va_arg(args, int));
	printf("l argument est : %i\n", i);
	_putchar(i + '0');
	return (1);
}

