#include "main.h"


/**
 * fill_octal - fill octal values to buffer.
 *
 * @buffer: buffer to be filled.
 * @value: number to be converted to octal number.
 * @index: start position.
 * Return: last filled index.
 */

int fill_octal(char *buffer, unsigned int value, int index)
{
	char *octal;
	int len, i;

	len = len_octal(value);
	octal = malloc(sizeof(octal) * len);
	octal = NULL;
	octal = to_octal(value);

	for (i = 0; i < len; i++)
	{
		buffer[index] = octal[i];
		index++;
	}

	return (index);
}


/**
 * to_octal - converts decimal to octal.
 *
 * @value: decimal number to be converted.
 * Return: pointer to string containing octal.
 */

char *to_octal(unsigned int value)
{

	const char *octal_table = "01234567";
	char *octal, *rev_octal;
	int len, i;
	unsigned int octal_value;


	len = len_octal(value);
	octal = malloc(sizeof(octal) * len);
	rev_octal = malloc(sizeof(rev_octal) * len);

	for (i = 0; i < len; i++)
	{
		octal_value = value % 8;
		octal[i] = octal_table[octal_value];
		value /= 8;
	}

	for (i = 0; i < len; i++)
	{
		rev_octal[i] = octal[(len - 1) - i];
	}

	return (rev_octal);
}



/**
 * len_octal - gets length of octal number.
 *
 * @value: value to be checked.
 * Return: length of octal number
 */

int len_octal(unsigned int value)
{
	int len;

	len = 0;

	while (value)
	{
		len++;
		value /= 8;
	}

	return (len);
}

