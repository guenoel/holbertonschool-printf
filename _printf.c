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

	va_list argp;

	if (format == NULL)
	{
		_putchar('\n');
		return (-1);
	}

	match tabtype[] = {
		{'c',printchar},
		{'s',printstring},
		/*
		{'d',printint},
		{'i',printint},
		{'u',printint},
		{'o',printint},
		{'x',printint},
		{'X',printint},
		{'p',printint},
		{'%',printint},
		{'r',printint},
		*/
		{0, NULL},
	};
	va_start(argp, format);
	c1 = 0;
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			for(j = 0; tabtype[j].form != 0; j++)
			{
				if (tabtype[j].form == format[i + 1])
				{
					c1 += tabtype[j].f(argp);
					i += 1;
					break;
				}
			}
		}
		else
		{
			c1 += _putchar(format[i]);
		}
	}
	va_end(argp);
	printf("compteur des arguments: %i\n", c1);
	return (c1);
}
