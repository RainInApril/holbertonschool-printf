#ifndef _MAIN_H_
#define _MAIN_H_

typedef struct modifier
{
	char *symbol;
	int (*func)(va_list list);
} s_mod;

int print_i(va_list list);
int print_c(va_list list);
int print_s(va_list list);


#endif /* _MAIN_H_ */
