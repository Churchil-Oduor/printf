#include <stdarg.h>
#include "main.h"
#include <stdlib.h>

/**
 * _printf - prints input.
 *
 * @format: is a character string. Th
 * eformat string is composed of zero or more directives.
 * Return: number.
 */
int _printf(const char *format, ...)
{
	char *buffer;
	int buff_len;
	va_list list, list_2;

	va_start(list, format);
	va_copy(list_2, list);

	buff_len = buffer_length(format, &list_2);
	buffer = malloc(sizeof(char *) * buff_len);
	fill_buffer(buffer, format, &list);
	custom_putchar(buffer, buff_len);
	return (buff_len);
}
