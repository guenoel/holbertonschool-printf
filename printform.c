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
	return (i);
}

int printint(va_list args)
{
	int i, d;
	
	i = (va_arg(args, int));
	d = (i % 10);
	printf("Le chiffre des unités est: %i\n", d);
	_putchar(d);
	return (1);
}
