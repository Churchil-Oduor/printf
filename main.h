#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
int _printf(const char *format, ...);
void our_putchar(char *c, int n);
int _strlen(char *str);
int fill_str(char *buffer, char *str, int index);
void fill_int(char *str, int index);
int fill_char(char *buffer, int ch, int index);
void fill_memory(const char *format, va_list list, char *buffer);
int buffer_length(const char *format, va_list *_list);
void fill_buffer(char*buffer, const char *format, va_list *_list);

#endif
