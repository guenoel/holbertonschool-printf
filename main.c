#include "_printf.h"

	int i, a;
	
	int main(int argc, char* argv[])
{
	for(i = 1; i < argc; i++)
	{
	a = _count(argv[i]);
	printf ("%d\n", a);
	}
	return (0);
}
