#include "main.h"

/**
 * _putchar - writes a variable lenght of char
 * @n: number of char
 * @s: string to print
 *
 * Return: int to reproduce printf
 */

int _putchar(char c)
{
	return write(1, &c, 1);
}
