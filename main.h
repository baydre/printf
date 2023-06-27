#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>
#include <limits.h>

/**
 * struct bj - function object
 * @jess: flag or function
 * @bay: function
 */

typedef struct bj
{
	char *jess;
	int (*bay)(va_list);
} bj_t;
int _printf(const char *format, ...);
int _putchar(char c);
int print_c(va_list baydre);
int (*format_func(char s))(va_list baydre);
int print_s(va_list baydre);
int print_d(va_list baydre);
int print_i(va_list jessie);
int print_b(va_list jes_dre);

#endif
