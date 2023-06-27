#include "main.h"
/**
 * get_func - search and return the correct function
 * @s: array to check
 * Return: a function (if correctly written)
 */
int (*get_func(char s))(va_list)
{
        bj_t bjs[] = {
                {"c", print_c},
                {"s", print_s},
                {"d", print_d},
                {"i", print_i},
                {"b", print_b},
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
