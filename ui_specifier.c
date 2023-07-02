#include "main.h"

/**
 * print_u - outputs unsigned value to stdout.
 * @args: argument value.
 * Return: number of count.
 */
int print_u(va_list args)
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
			buffer[count++] = '0' + (num % 10);
			num /= 10;
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
