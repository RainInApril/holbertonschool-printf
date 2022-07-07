#ifndef __MAIN_H__							
#define __MAIN_H__							
							
#include <stdio.h>							
#include <stdlib.h>							
#include <stdarg.h>							
/**							
* struct func - function							
* @c: param							
* @f: param							
*/							
							
typedef struct func							
{							
char *c;							
int (*f)(va_list args);							
} struc;							
							
int ptr_char(va_list args);							
int ptr_int(va_list args);							
int _printf(const char *format, ...);							
int _putchar(char c);							
int funct_print(char j, va_list args);
int print_s(va_list list);
							
#endif							
