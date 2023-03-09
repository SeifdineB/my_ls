/*
** EPITECH PROJECT, 2022
** dd
** File description:
** dd
*/

int my_is_prime(int nb)
{
    int   i = 2;

    if (nb <= 0 || nb == 1)
        return (0);

    while (nb > i) {
        if (nb % i == 0) {
            return (0);
        }
        i = i + 1;
    }
    return (1);
}
