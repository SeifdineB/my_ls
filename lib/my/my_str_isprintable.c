/*
** EPITECH PROJECT, 2022
** dd
** File description:
** dd
*/

#include <ctype.h>

int my_str_isprintable(char const *str)
{
    int i = 0;
    if (str[i] == 'NULL')
        return (1);
    while (str[i] != '\0') {
        if (isprint(str[i]) == 0)
            return (0);
        i = i + 1;
    }
    return (1);
}
