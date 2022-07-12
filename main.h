#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <limits.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
int c_end_s(char *s);
int _count(const char *c);
int _putchar(char c);
int _putstring(char* s);
int _printf(const char *format, ...);
int printchar(va_list args);
int printstring(va_list args);
int printint(va_list args);
void printnum(int num);
#endif /* MAIN_H */
