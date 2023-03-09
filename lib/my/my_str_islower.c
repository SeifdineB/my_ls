/*
** EPITECH PROJECT, 2022
** dd
** File description:
** dd
*/


#include <stdio.h>

int my_str_islower(char const *str)
{
    int i = 0;
    if (str[i] == 'NULL') {
        return 1;
    }
    while (str[i] != '\0') {
        if (str[i] < 97 || str[i] > 122)
            return (0);
    i = i + 1;
        }
    return (1);
}
