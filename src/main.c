/*
** EPITECH PROJECT, 2022
** ls
** File description:
** ls
*/

#include "myls.h"
#include "my.h"


int handling_error(char **dossier)
{
    DIR *dir;

    for (int i = 0; dossier[i]; i++){
        dir = opendir(dossier[i]);
        if (dir == NULL){
            exit(84);
        }
        closedir(dir);
    }
    return 0;
}

int main(int ac, char **av)
{
    struct s_myls ls;
    start_struct(&ls);
    whitch_flag(ac, av, &ls);
    handling_error(ls.dossier);
    ls_base(&ls);
    return 0;
}
