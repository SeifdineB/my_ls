/*
** EPITECH PROJECT, 2022
** dd
** File description:
** dd
*/


int	my_putnbr(int nb)
{
    int i = 10;
    int result = 0;
    if (0 > nb) {
    my_putchar('-');
    nb = nb * (-1);
    }
    result = nb;
    if (result >= i)
    my_putnbr(result / i);
    my_putchar((result % i) + 48);
}
