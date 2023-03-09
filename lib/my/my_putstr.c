/*
** EPITECH PROJECT, 2022
** my_putstr
** File description:
** day04
*/

void my_putstr(char const *str)
{
    int i = 0;
    while (str[i] != '\0') {
        my_putchar(str[i]);
        i += 1;
    }
}
