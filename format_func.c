#include "main.h"

/**
 * get_func - checks and return the correct function
 * @s: array to be checked
 * Return: NULL
 */
int (*get_func(char s))(va_list)
{
	bj_t bjs[] = {
	{"c", print_c},
	{"s", print_s},
	{"d", print_d},
	{"i", print_i},
	{"b", print_b},
	{"u", print_u},
	{"o", print_oct},
	{NULL, NULL}
	};

	int i;

	for (i = 0; bjs[i].jess != NULL; i++)
	{
	if (*bjs[i].jess == s)
	return (bjs[i].bay);
	}
	return (NULL);
}
