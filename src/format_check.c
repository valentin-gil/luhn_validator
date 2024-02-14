/*
** EPITECH PROJECT, 2024
** luhn_validator
** File description:
** format_check
*/

#include "my.h"

int is_num(char c)
{
    if (c >= '0' && c <= 57)
        return (1);
    return (0);
}

int format_check(char const *str)
{
    if (my_strlen(str) == 0)
        return (84);
    for (int i = 0; str[i] != '\0'; i++) {
        if (is_num(str[i]) == 0)
            return (84);
    }
    return (0);
}
