#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

typedef struct modifier
{
	char *symbol;
	int (*func)(va_list list);
} s_mod;

int print_i(va_list list);
int print_c(va_list list);
int print_s(va_list list);
int _putchar(char c);
char *_strdup(const char *str);
char *_strcpy(char *dest, char *src);
int _strlen(const char *s);

#endif /* _MAIN_H_ */
