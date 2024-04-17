/*
** EPITECH PROJECT, 2023
** tests_my_strlen
** File description:
** alala
*/

#include <criterion/criterion.h>
#include "tests_includes.h"

Test(is_token, no_token)
{
    char const *tokens = NULL;
    cr_assert(tokens == NULL);
}

Test(is_token, valid_token)
{
    char const *tokens = "Hello";
    char c = 'H';
    cr_assert(tokens[0] == c);
}
