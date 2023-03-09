/*
** EPITECH PROJECT, 2022
** ls
** File description:
** ls
*/

#include "myls.h"
#include "my.h"

void my_simple_ls(DIR *a)
{
    struct dirent *b;
    while ((b = readdir(a)) != 0)
        if ((b->d_name[0] != '.'))
            mini_printf("%s\n", b->d_name);
}

void my_ls_rmaj(struct s_myls *a, char *b)
{
    struct dirent *c;
    struct stat d;
    DIR *e;
    char *f;
    my_simple_ls(opendir(b));
    my_putchar('\n');
    e = opendir(b);
    while ((c = readdir(e)) != 0) {
        f = my_strcat(my_strcat(b, "/"), c->d_name);
        stat(f, &d);
        if (S_ISDIR(d.st_mode) && c->d_name[0] != '.'){
            mini_printf("%s:\n", f);
            my_ls_rmaj(a, f);
        }
    }
}
