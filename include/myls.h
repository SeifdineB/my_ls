/*
** EPITECH PROJECT, 2022
** ls
** File description:
** ls
*/



#ifndef _MYLS_H_
        #define _MYLS_H_

        #include <stdio.h>
        #include <sys/types.h>
        #include <sys/stat.h>
        #include <dirent.h>
        #include <stdlib.h>
        #include <pwd.h>
        #include <grp.h>
        #include <string.h>
        #include <time.h>
        #include <unistd.h>
        #include <getopt.h>
        #include <fcntl.h>
        #include <string.h>
        #include <getopt.h>

struct s_myls {
    int ls_l;
    int ls_r;
    int	ls_b;
    char **dossier;
};

void searh_folder(char *str, struct s_myls *ls);
void malloc_folder(struct s_myls *ls);
void start_struct(struct s_myls *ls);
void redirect(char *str, struct s_myls *ls);
void redirect2(char c, struct s_myls *ls);
void is_there_flag(int ac, char **av, struct s_myls *ls);
int ls_a(void);
void my_option(struct s_myls *ls, DIR *dir);
void ls_base(struct s_myls *ls);
int main(int ac, char **av);
int handling_error(char **dossier);
void my_simple_ls(DIR *a);
void dossier_text(struct stat sb);
void user(struct stat sb);
void my_right(struct stat sb);
void display_all(char *a);
void my_ls_rmaj(struct s_myls *a, char *b);
char *search_in_all(char *a, char *b);
void guid(struct stat sb);
void my_ls_l(DIR *a, char *b);
void group(struct stat sb);
#endif
