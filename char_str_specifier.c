#include "main.h"

/**
 * print_c - Prints character (%c)
 * @baydre: store character arguments
 * Return: num of parameters printed
 */
int print_c(va_list baydre)
{
	int c = va_arg(baydre, int);

	return (_putchar(c));
}

/**
 * print_s - Prints string (%s)
 * @baydre: store character arguments
 * Return: num of parameters printed
 */
int print_s(va_list baydre)
{
	int i, count = 0;
	char *str;

	str = va_arg(baydre, char *);
	if (str == NULL)
	str = "(null)";

	for (i = 0; str[i]; i++)
	count += _putchar(str[i]);
	return (count);
}
