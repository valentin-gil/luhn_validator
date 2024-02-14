/*
** EPITECH PROJECT, 2023
** solo_stumper4
** File description:
** my_test.c
*/

#include "my.h"
#include <criterion/criterion.h>
#include <criterion/redirect.h>

Test(operations, valid, .init = cr_redirect_stdout)
{
    operations("1784");
    cr_assert_stdout_eq_str("valid\n");
}

Test(operations, valid2, .init = cr_redirect_stdout)
{
    operations("123456782");
    cr_assert_stdout_eq_str("valid\n");
}

Test(operations, invalid, .init = cr_redirect_stdout)
{
    operations("4783");
    cr_assert_stdout_eq_str("invalid\n");
}

Test(operations, invalid2, .init = cr_redirect_stdout)
{
    operations("1");
    cr_assert_stdout_eq_str("invalid\n");
}

Test(is_num, is_num)
{
    cr_assert_eq(is_num(50), 1);
}

Test(my_putstr, test, .init = cr_redirect_stdout)
{
    my_putstr("Hello\n");
    cr_assert_stdout_eq_str("Hello\n");
}

Test(format_check, letters)
{
    cr_assert_eq(format_check("chocolatine"), 84);
}

Test(format_check, nums)
{
    cr_assert_eq(format_check("12456782"), 0);
}

Test(format_check, empty)
{
    cr_assert_eq(format_check(""), 84);
}
