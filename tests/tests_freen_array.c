/*
** EPITECH PROJECT, 2023
** tests_my_strlen
** File description:
** alala
*/

#include <criterion/criterion.h>
#include "tests_includes.h"

void freen_array(char **array, int n)
{
    if (!array || n < 0) return;
    n = MIN(n, my_array_len(array));
    for (int i = 0; i < n; i++) my_free(array[i]);
    my_free(array);
}

Test(freen_array, no_array)
{
    char **array = NULL;
    int n = 45;
    freen_array(array, n);
}

Test(freen_array)
