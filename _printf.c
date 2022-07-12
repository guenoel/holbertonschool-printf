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
		{'%',printpercent},
		/*
		   {'d',printint},
		   {'i',printint},
		   {'u',printint},
		   {'o',printint},
		   {'x',printint},
		   {'X',printint},
		   {'p',printint},
		   */
		{0, NULL},
	};


	if ((format == NULL))
		return (-1);

	va_start(argp, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == 0)
				return (-1);
			for(j = 0; tabtype[j].form != 0; j++)
			{
				if (tabtype[j].form == format[i + 1])
				{
					c1 += tabtype[j].f(argp);
					i += 1;
					break;
				}
			}
			if (tabtype[j].form == 0 && format[i + 1])
				c1 += _putchar('%');
		}
		else
		{
			/*	if (format[i - 1] == '%')
				{
				_putchar('%');
				}
				*/
			c1 += _putchar(format[i]);
		}
	}
	va_end(argp);
	return (c1);
}
