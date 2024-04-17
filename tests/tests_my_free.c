/*
** EPITECH PROJECT, 2023
** tests_my_strlen
** File description:
** alala
*/

#include <criterion/criterion.h>
#include "tests_includes.h"

Test(my_free, ok)
{
    char *ptr = strdup("abcd");
    my_free(ptr);
}
