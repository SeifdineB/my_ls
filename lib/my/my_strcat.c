/*
** EPITECH PROJECT, 2022
** ls
** File description:
** lib*
*/

char *allocate_result_string(char *dest, char const *src)
{
    char *res;
    res = malloc(sizeof(*res) * (my_strlen(dest) + my_strlen(src) + 1));
    return res;
}

void copy_dest_to_result(char *dest, char *res)
{
    int i = 0;
    while (dest[i]) {
        res[i] = dest[i];
        i++;
    }
}

void copy_src_to_result(char const *src, char *res, int dest_length)
{
    int count = 0;
    while (src[count]) {
        res[dest_length + count] = src[count];
        count++;
    }
    res[dest_length + count] = '\0';
}

char *my_strcat(char *dest, char const *src)
{
    char *res = allocate_result_string(dest, src);
    copy_dest_to_result(dest, res);
    copy_src_to_result(src, res, my_strlen(dest));
    return res;
}
