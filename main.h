#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>
#include <limits.h>

/**
 * struct bj - function object
 * @jess: flag or function
 * @bay: function
 */

typedef struct bj
{
        char *jess;
        int (*bay)(va_list);
} bj_t;


#endif
