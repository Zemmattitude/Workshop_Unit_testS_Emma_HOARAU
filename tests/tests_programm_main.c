/*
** EPITECH PROJECT, 2023
** tests_my_strlen
** File description:
** alala
*/

#include <criterion/criterion.h>
#include "tests_includes.h"

Test(programm_main, error_argc)
{
    int argc = 0;
    char **argv = NULL;
    cr_assert(programm_main(argc, argv) == 84);
}
