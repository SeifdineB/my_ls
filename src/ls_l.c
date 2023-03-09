/*
** EPITECH PROJECT, 2022
** ls
** File description:
** ls
*/

#include "myls.h"
#include "my.h"

char *search_in_all(char *a, char *b)
{
    char *c = my_strdup(a);

    if (my_strcmp(c, ".") == 0){
        c = my_strcat(c, "/");
        c = my_strcat(c, b);
        return c;
    }
    c = my_strcat(c, "/");
    c = my_strcat(c, b);
    return c;
}

void display_all(char *a)
{
    struct stat b;
    struct dirent *c;
    int d = 0;
    char *e;
    DIR *f = opendir(a);

    while ((c = readdir(f))){
        e = my_strcat(my_strcat(a, "/"), c->d_name);
        if ((lstat(e, &b)) == 0)
            (c->d_name[0] != '.') ? d += b.st_blocks : 0;
    }
    closedir(f);
    mini_printf("total %d\n", d / 2);
}

void my_ls_l(DIR *a, char *b)
{
    struct dirent *c;
    struct stat d;
    struct passwd *e;
    struct group *f;
    char *g;
    display_all(b);
    while ((c = readdir(a)) != 0){
        if ((c->d_name[0] != '.')) {
            g = search_in_all(b, c->d_name);
            stat(g, &d);
            e = getpwuid(d.st_uid);
            f = getgrgid(d.st_gid);
            my_right(d);
            mini_printf("%d %s ", d.st_nlink, e->pw_name);
            mini_printf("%s %d ", f->gr_name, d.st_size);
            write(1, (ctime(&d.st_mtime) + 4),
                (my_strlen(ctime(&d.st_mtime)) - 13));
                mini_printf(" %s\n", c->d_name);
        }
    }
}
