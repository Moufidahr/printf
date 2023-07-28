#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

#include <stdlib.h>
#include <string.h>


int _printf(const char *format, ...);
void print_char(va_list *args);
void int_to_str(int n, char *s);
void print_int(va_list *args);

#endif
