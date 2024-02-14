/*
** EPITECH PROJECT, 2024
** luhn_validator
** File description:
** operations
*/

#include "my.h"
#include <limits.h>

static int second_digit(char c)
{
    int num = (c - 48) * 2;

    if (num > 9)
        num -= 9;
    return (num);
}

static void display(int n)
{
    if (n % 10 == 0) {
        my_putstr("valid\n");
    } else {
        my_putstr("invalid\n");
    }
}

static int error_check(int n)
{
    if (n < 0) {
        return (84);
    }
    return (0);
}

int operations(char const *str)
{
    int res = 0;
    int count = 1;

    for (int i = (my_strlen(str) - 1); i >= 0; i--) {
        if (count % 2 == 0) {
            res += second_digit(str[i]);
            count += 1;
        } else {
            res += str[i] - 48;
            count += 1;
        }
        if (error_check(res) == 84)
            return (84);
    }
    display(res);
    return (0);
}
