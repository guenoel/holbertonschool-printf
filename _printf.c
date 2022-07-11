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
	int i, j, r;
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
		{0, NULL},
	};
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
				for(j = 0; j < 3; j++)
				{
					if (format[i + 1] == tabtype[j].form)
					{
						r = tabtype[j].f(argp);
						i = i + 2;
					}
				}
		}
			_putchar(format[i]);
	}
	va_end(argp);
	return (r);
}
