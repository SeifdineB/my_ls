/*
** EPITECH PROJECT, 2022
** ls
** File description:
** ls
*/

#include "my.h"
#include "myls.h"

int ls_a(void)
{
    DIR *D;
    D = opendir(".");
    int error = 0;
    if (D == NULL){
        error = 84;
        return error;
    }
    struct dirent *E;
    while ((E = readdir(D)) != NULL) {
    mini_printf("%s ", E ->d_name);
    }
    mini_printf("\n");
    closedir(D);
    return error;
}

void whitch_flag(int ac, char **av, struct s_myls *ls)
{
    for (int i = 1; i < ac; i++) {
        if (av[i][0] == '-') {
            redirect(av[i], ls);
        } else {
            searh_folder(av[i], ls);
        }
    }
}
