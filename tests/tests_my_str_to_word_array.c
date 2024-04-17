/*
** EPITECH PROJECT, 2023
** tests_my_strlen
** File description:
** alala
*/

#include <criterion/criterion.h>
#include "tests_includes.h"

Test(my_str_to_word_array, no_str)
{
    char const *str = NULL;
    char *sepa = ";";
    cr_assert_null(my_str_to_word_array(str, sepa));
}

Test(my_str_to_word_array, no_sepa)
{
    char const *str = "alala;alala;ouille";
    char *sepa = NULL;
    cr_assert_null(my_str_to_word_array(str, sepa));
}
