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
	if (s == NULL)
		return (write(1, "(null)", 6));
	for(i = 0; s[i] != '\0'; i++)
		_putchar(s[i]);
	return (i);
}

int printint(va_list args)
{
	int i;

	int num = va_arg(args, int);
	i = printnum(num);
	return (i);
}

int printnum(int num)
{
	int i;

	if ((num / 10) > 0)
		i = printnum(num / 10);
	else
	{
		i = 0;
	}
	i += _putchar((num % 10) + '0');
	return (i);
}
int printpercent(va_list args __attribute__((unused)))
{
	write(1, "%", 1);
	return (2);
}
