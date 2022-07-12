#include "main.h"

/**
 * _printf - fonction printf
 * @n: numbers of characters
 * @s: string
 *
 * Return: ?
 */

int _printf(const char *format, ...)
{
	int i, j, c1, c2;
	struct match {
		char form;
		int (*f)(va_list args);
	};

	va_list argp;
	struct match tabtype[] = {
		{'c',printchar},
		{'s',printstring},
		{'d',printint},
		{'i',printint},
		{'u',printint},
		{'o',printint},
		{'x',printint},
		{'X',printint},
		{'p',printint},
		{'%',printint},
		{'r',printint},
		{0, NULL},
	};
	c1 = 0;
	c2 = 0;
	va_start(argp, format);
	if (format == NULL)
	{
		_putchar('\n');
		return (-1);
	}

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			for(j = 0; (tabtype[j].form != 0) && (tabtype[j].form != format[i + 1]); j++)
			{
				;
			}
			c1 = c1 + (tabtype[j].f(argp));
			i = i + 2;
		}
		c2 = c2 + (_putchar(format[i]));
	}
		printf("compteur des arguments: %i\n", c1);
		printf("compteur de format: %i\n", c2);
	va_end(argp);
	return (c1 + c2);
}
