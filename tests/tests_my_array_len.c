/*
** EPITECH PROJECT, 2023
** tests_my_strlen
** File description:
** alala
*/

#include <criterion/criterion.h>
#include "tests_includes.h"

// Test(my_array_len, test_len_size)
// {
//     char **array = malloc(sizeof(char *) * 10);
//     cr_assert_eq(my_array_len(array), 9);
// }

Test(my_array_len, test_len_null)
{
    char **array = NULL;
    cr_assert(my_array_len(array) == -1);
}
