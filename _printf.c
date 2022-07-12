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
	int i = 0, j = 0, c1 = 0;

	va_list argp;
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


	if (format == NULL)
	{
		_putchar('\n');
		return (-1);
	}

	va_start(argp, format);
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
	return (c1);
}
