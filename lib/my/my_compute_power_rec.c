/*
** EPITECH PROJECT, 2022
** dd
** File description:
** dd
*/

float my_compute_power_rec(int nb, int p)
{
    if (p == 0){
        return (1);
    }
    if (p < 0){
        return (0);
    }
    int result = nb * my_compute_power_rec (nb, p - 1);
    return (result);
}
