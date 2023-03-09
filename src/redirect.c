/*
** EPITECH PROJECT, 2022
** ls
** File description:
** ls
*/

#include "myls.h"
#include "my.h"

void my_option(struct s_myls *ls, DIR *dir)
{
    if (ls->ls_r == 1) {
        mini_printf("%s:\n", ls->dossier[ls->ls_b]);
        my_ls_rmaj(ls, ls->dossier[ls->ls_b]);
    }
    if (ls->ls_l == 1) {
        my_ls_l(dir, ls->dossier[ls->ls_b]);
    }
}

void ls_base(struct s_myls *ls)
{
    DIR *dir;
    int i;
    for (i = 0; ls->dossier[i]; i++) {
        if ((dir = opendir(ls->dossier[i])) == NULL) {
        }
        if (ls->ls_l == 0 && ls->ls_r == 0) {
        my_simple_ls(dir);
    } else {
        my_option(ls, dir);
    }
    closedir(dir);
    }
}
