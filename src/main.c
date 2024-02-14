/*
** EPITECH PROJECT, 2024
** luhn_validator
** File description:
** main
*/

#include "my.h"

int main(int ac, char **av)
{
    if (ac != 2)
        return (84);
    if (format_check(av[1]) == 84)
        return (84);
    if (operations(av[1]) == 84)
        return (84);
    return (0);
}
