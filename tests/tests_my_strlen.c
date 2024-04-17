/*
** EPITECH PROJECT, 2023
** tests_my_strlen
** File description:
** alala
*/

#include <criterion/criterion.h>
#include "tests_includes.h"

Test(my_strlen, str)
{
    int value = my_strlen("Hello World!");
    cr_assert(value == 12);
}

Test(my_strlen, str2)
{
    char *strings = NULL;
    int value = my_strlen(strings);
    cr_assert(value == -1);
}
