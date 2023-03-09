/*
** EPITECH PROJECT, 2022
** lib
** File description:
** lib
*/

char *my_strdup(char const *src)
{
    int src_length = my_strlen(src);
    char *dest = malloc(sizeof(*dest) * (src_length + 1));
    int i;
    for (i = 0; i < src_length; i++) {
        dest[i] = src[i];
    }
    dest[src_length] = '\0';
    return dest;
}
