#include "main.h"
/**
 * printchar - Imprime un caractere unique
 * @args: les arguments de la fonction variadique
 *
 * Return: Nombre de caractères imprimés
 */

int printchar(va_list args)
{
	char c = va_arg(args, int);

	return (_putchar(c));
}

/**
 * printstring - Imprime un caractere unique
 * @args: les 1arguments de la fonction variadique
 *
 * Return: Nombre de caractères imprimés
 */

int printstring(va_list args)
{
	int i;
	char *s;

	s = va_arg(args, char*);
	if (s == NULL)
		return (write(1, "(null)", 6));
	for (i = 0; s[i] != '\0'; i++)
		_putchar(s[i]);
	return (i);
}

/**
 * printint - Imprime un caractere unique
 * @args: les arguments de la fonction variadique
 *
 * Return: Nombre de caractères imprimés
 */

int printint(va_list args)
{
	int i = 0, num1, num2;
	/*unsigned int j;*/

	int num = va_arg(args, int);

	if (num < 0)
	{
		num1 = ((num /10) * (-1));
		num2 = ((num % 10) * (-1));
		i += _putchar('-');
	i += printnum(num1);
	i += printnum(num2);
	}
	else
	{
	i += printnum(num);
	}
/*	printf("int min = %i\n", INT_MIN);
	printf("num1 = %i\n", num1);
	printf("num2 = %i\n", num2);*/
	return (i);
}

/**
 * printnum - fonction recursive qui imprime un nombre
 * en transformant chaque chiffre en caractere
 * @num: les arguments de la fonction variadique
 *
 * Return: Nombre de caractères imprimés
 */

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
/**
 * printpercent - Imprime un caractere unique
 * @args: les arguments de la fonction variadique
 *
 * Return: Nombre de caractères imprimés
 */

int printpercent(va_list args __attribute__((unused)))
{
	write(1, "%", 1);
	return (1);
}
