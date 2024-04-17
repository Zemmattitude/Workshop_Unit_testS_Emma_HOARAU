/*
** EPITECH PROJECT, 2023
** tests_my_strlen
** File description:
** alala
*/

#include <criterion/criterion.h>
#include "tests_includes.h"

Test(my_strlen_sepa, exact_value)
{
    char const *strings = "Bonjour;tout le monde";
    char const *sepa = ";";
    int value = my_strlen_sepa(strings, sepa);
    cr_assert(value == 7);
}

Test(my_strlen_sepa, strings_null)
{
    char const *strings = NULL;
    char const *sepa = ";";
    int value = my_strlen_sepa(strings, sepa);
    cr_assert(value == -1);
}

Test(my_strlen_sepa, sepa_null)
{
    char const *strings = "Bonjour;tout le monde";
    char const *sepa = NULL;
    int value = my_strlen_sepa(strings, sepa);
    cr_assert(value == -1);
}
