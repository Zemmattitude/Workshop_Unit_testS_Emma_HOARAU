/*
** EPITECH PROJECT, 2023
** tests_my_strlen
** File description:
** alala
*/

#include <criterion/criterion.h>
#include "tests_includes.h"

Test(freen_array, no_array)
{
    char **array = NULL;
    int n = 45;
    freen_array(array, n);
}

Test(freen_array, error_n)
{
    char **array = malloc(70);
    int n = -45;
    freen_array(array, n);
}

Test(freen_array, free)
{
    char **array = malloc(70);
    int n = 40;
    freen_array(array, n);
}
