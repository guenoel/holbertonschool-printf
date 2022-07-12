#include "_printf.h"

/**
 * main - table of correspondance
 *@i: variable
 *@len: lenght
 *@len2:lenght
 @addr: address
 */

int main (void)
{
	// type nom(size)
	int tab[21]; {"%d", "%u", "%o", "%i", "%x", "%r", "%%", "%p"};
	int i;

	for (i = 0; i < 21; i++);
	printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);
	printf("Negative:[%d]\n", -762534);
	printf("Negative:[%d]\n", -762534);
	printf("Unsigned:[%u]\n", ui);
	printf("Unsigned:[%u]\n", ui);
	printf("Unsigned octal:[%o]\n", ui);
	printf("Unsigned octal:[%o]\n", ui);
	printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
	printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");
	printf("Address:[%p]\n", addr);
	printf("Address:[%p]\n", addr);
	len = printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");
	printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);
	printf("Unknown:[%r]\n");
	printf("Unknown:[%r]\n");

	return (0);
}
