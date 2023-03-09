/*
** EPITECH PROJECT, 2022
** dd
** File description:
** dd
*/

#include <stdio.h>

int my_str_isupper(char const *str)
{
    int i = 0;
    if (str[i] == 'NULL') {
        return 1;
    }
    while (str[i] != '\0') {
        if (str[i] < 65 || str[i] > 90)
            return (0);
    i = i + 1;
    }
    return (1);
}
