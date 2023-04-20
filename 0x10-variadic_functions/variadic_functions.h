#ifndef VARIADIC_F
#define VARIADIC_F
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
