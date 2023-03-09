/*
** EPITECH PROJECT, 2022
** ddhh
** File description:
** ddjj
*/

int my_strcmp(char const *s1, char const *s2)
{
    int i = 0;
    int result = 0;

    while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i]) {
        i = i + 1;
    }
    result = (s1[i] - s2[i]);
    return (result);
}
