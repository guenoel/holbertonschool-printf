#ifndef STRUCTUREPRINTF_C
#define STRUCTUREPRINTF_C

/**
 *struct tab - Struct tab
 *@tab: affichage type
 *contient tous les prototypes de fonctions et les structures
 *@f: The function associated
 */

typedef struct tab
{
	char *tab;
	int (*f)(int a);
} tab_t;

int tab_d(int a);
int tab_i(int a);
int tab_c(int a);
int tab_u(int a);
int tab_li(int a);
int tab_ld(int a);
int tab_lu(int a);
int tab_lli(int a);
int tab_lf(int a);
int tab_le(int a);
int tab_f(int a);
int tab_g(int a);
int tab_a(int a);
int tab_e(int a);
int tab_hu(int a);
int tab_llu(int a);
int (*tab_ofcorrespondance(char *s))(int, int);

#endif /* STRUCTUREPRINTF_C */
