#include "main.h"

int printchar(va_list args)
{
	char c = va_arg(args, int);
	return _putchar(c);
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
	int num = va_arg(args, int);
	printnum(num);
	return (sizeof(int));
}

void printnum(int num)
{
	if ((num / 10) > 0)
		printnum(num / 10);
	_putchar((num % 10) + '0');
	return;
}

