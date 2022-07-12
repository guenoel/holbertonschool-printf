#include "main.h"

/**
 * _putchar - writes a variable lenght of char
 * @c: caractere a imprimer
 *
 * Return: nombre de caracteres imprimés
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
