#include "main.h"

/**
 * print_oct - outputs octal value to stdout.
 * @args: argument values.
 * Return: number of counts.
 */
int print_oct(va_list args)
{
	int count = 0;
	unsigned int num = va_arg(args, int);
	char buffer[1024];
	int i, j;

	if (num == 0)
	{
		buffer[count++] = '0';
	}
	else
	{
		while (num > 0)
		{
			buffer[count++] = '0' + (num % 8);
			num /= 8;
		}
	}

	for (i = 0, j = count - 1; i < j; i++, j--)
	{
		char var = buffer[i];

		buffer[i] = buffer[j];
		buffer[j] = var;
	}

	write(1, buffer, count);
	return (count);
}
