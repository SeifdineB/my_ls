/*
** EPITECH PROJECT, 2022
** dd
** File description:
** dd
*/

int get (char *str, int i, int nepo)
{
    long result = 0;
    int nb = 0;
    while ((str[i] >= '0' && str[i] <= '9')) {
        result = (result * 10);
        nb = (str[i] - 48);
        result = result + nb;
        i = i + 1;
        if (result == 2147483648 && nepo % 2 != 0) {
            return (result);
        }
        if (result > 2147483647) {
            return (0);
        }
}
        return (result);
}

int countneg (char *str)
{
    int i = 0;
    int nepo = 0;
    while (str[i] < '0' || str [i] > '9') {
        if (str[i] == '-') {
        nepo = nepo + 1;
        }
        i = i + 1;
    }
    return nepo;
}

int my_getnbr(char const *str)
{
    int i = 0;
    long result = 0;
    int nepo = 0;
    int nb = 0;
    if (str == 0){
    return (0);
    }
    while (str[i] < '0' || str [i] > '9') {
        i = i + 1;
    }
        nepo = countneg(str);
        result = get(str, i, nepo);
    if (nepo % 2 != 0){
    result = result * (-1);
    }
    return (result);
}
