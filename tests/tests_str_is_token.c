/*
** EPITECH PROJECT, 2023
** tests_my_strlen
** File description:
** alala
*/

#include <criterion/criterion.h>
#include "tests_includes.h"

Test(str_is_token, no_str)
{
    char const *str = NULL;
    char const *tokens = "oula";
    cr_assert_not(str_is_token(str, tokens));
}

Test(str_is_token, no_tokens)
{
    char const *str = "oula";
    char const *tokens = NULL;
    cr_assert_not(str_is_token(str, tokens));
}

Test(str_is_token, wrong_value)
{
    char const *str = "oula";
    char const *tokens = "znzn";
    cr_assert_not(str_is_token(str, tokens));
}

Test(str_is_token,good_value)
{
    char const *str = "oula";
    char const *tokens = "oula";
    cr_assert(str_is_token(str, tokens));
}
