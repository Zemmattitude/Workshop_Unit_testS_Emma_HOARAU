/*
** EPITECH PROJECT, 2023
** tests_my_strlen
** File description:
** alala
*/

#include <criterion/criterion.h>
#include "tests_includes.h"

Test(my_count_words, no_str)
{
    char const *strings = NULL;
    char const *sepa = ";";
    int value = my_count_words(strings, sepa);
    cr_assert(value == -1);
}

Test(my_count_words, no_sepa)
{
    char const *strings = "Hello World.";
    char const *sepa = NULL;
    int value = my_count_words(strings, sepa);
    cr_assert(value == -1);
}
