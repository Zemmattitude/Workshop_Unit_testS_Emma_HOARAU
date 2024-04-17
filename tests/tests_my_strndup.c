/*
** EPITECH PROJECT, 2023
** tests_my_strlen
** File description:
** alala
*/

#include <criterion/criterion.h>
#include "tests_includes.h"

Test(my_strndup, no_str)
{
    char const *str = NULL;
    int n = 5;
    cr_assert_null(my_strndup(str, n));
}

Test(my_strndup, neg_n)
{
    int n = -5;
    char const *str = "Hello";
    cr_assert_null(my_strndup(str, n));
}

Test(my_strndup, valid_new_str)
{
    char const *str = "Hello World.";
    char *new_str = "Hello";
    int n = 5;
    cr_assert_str_eq(my_strndup(str, n), new_str);
}
