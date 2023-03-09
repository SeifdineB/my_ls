/*
** EPITECH PROJECT, 2022
** my_isneg
** File description:
** task04
*/

void my_putchar(char c);

int my_isneg(int n)
{
    if (n >= 0) {
            my_putchar('P');
    } else {
            my_putchar('N');
    }
    my_putchar('\n');
}
