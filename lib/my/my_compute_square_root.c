/*
** EPITECH PROJECT, 2022
** dd
** File description:
** dd
*/

int my_compute_square_root(int nb)
{
    int n = 0;
    int i = 0;
    while (i * i != nb) {
        n = i + 1;
    i = i + 1;
    if (n > nb) {
        return (0);
    }
    }
    return n;
}
