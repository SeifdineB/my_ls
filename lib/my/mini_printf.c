/*
** EPITECH PROJECT, 2022
** ddd
** File description:
** ddd
*/

#include <unistd.h>
#include <stdarg.h>

int pourcentage (char m, va_list(str))
{
    if (m == 's') {
        my_putstr(va_arg(str, char *));
    }
    if (m == 'd') {
        my_putnbr(va_arg(str, int));
    }
    if (m == 'i') {
        my_putnbr(va_arg(str, int));
    }
    if (m == 'c') {
        my_putchar(va_arg(str, int));
    }
    if (m == '%') {
        my_putchar('%');
    }
}

int mini_printf (const char * format , ...)
{
    int i = 0;
    va_list(str);
    va_start(str, format);
    while (format[i] != '\0') {
        if (format[i] == 10)
            my_putchar(10);
        if (format[i] >= 32 && format[i] <= 126 && format[i] != '%') {
            my_putchar(format[i]);
        }
        if (format[i] == '%') {
            i = i + 1;
            pourcentage(format[i], str);
        }
        i = i + 1;
    }
    va_end(str);
    return (i);
}
