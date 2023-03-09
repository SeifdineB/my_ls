/*
** EPITECH PROJECT, 2022
** ls
** File description:
** ls
*/


#include "myls.h"
#include "my.h"

void searh_folder(char *str, struct s_myls *ls)
{
    static int nb = 0;
    int str_length = my_strlen(str);
    ls->dossier[nb] = malloc(sizeof(*ls->dossier[nb]) * (str_length + 1));
        if (ls->dossier[nb] == NULL){
            return;
        }
    int i;
        for (i = 0; i < str_length; i++) {
            ls->dossier[nb][i] = str[i];
        }
    ls->dossier[nb][str_length] = '\0';
    nb += 1;
    ls->dossier[nb] = NULL;
}

void malloc_folder(struct s_myls *ls)
{
    ls->dossier = malloc(sizeof(*ls->dossier) * 2);
        if (ls->dossier == NULL){
            exit(84);
        }
}

void start_struct(struct s_myls *ls)
{
    ls->ls_l = 0;
    ls->ls_r = 0;
    ls->ls_b = 0;
    malloc_folder(ls);
    ls->dossier[0] = my_strdup(".");
        if (ls->dossier[0] == NULL){
            free(ls->dossier);
            exit(84);
        }
    ls->dossier[1] = NULL;
}

void redirect(char *str, struct s_myls *ls)
{
    int i = 0;
        if (str[i] == '-'){
            i++;
        }
    while (str[i]){
        redirect2(str[i], ls);
        i++;
    }
}

void redirect2(char c, struct s_myls *ls)
{
    switch (c) {
        case 'l':
            ls->ls_l = 1;
            break;
        case 'R':
            ls->ls_r = 1;
            break;
        default:
            exit(84);
    }
}
