/*
** EPITECH PROJECT, 2022
** ls
** File description:
** ls
*/

#include "myls.h"
#include "my.h"

void my_right(struct stat sb)
{
    dossier_text(sb);
    user(sb);
    group(sb);
    guid(sb);
}

void dossier_text(struct stat sb)
{
    mini_printf(S_ISDIR(sb.st_mode) ? "d" : "-");
}

void user(struct stat sb)
{
    mini_printf(sb.st_mode & S_IRUSR ? "r" : "-");
    mini_printf(sb.st_mode & S_IWUSR ? "w" : "-");
    mini_printf(sb.st_mode & S_IXUSR ? "x" : "-");
}

void group(struct stat sb)
{
    mini_printf(sb.st_mode & S_IRGRP ? "r" : "-");
    mini_printf(sb.st_mode & S_IWGRP ? "w" : "-");
    if ((sb.st_mode & S_ISGID) && !(sb.st_mode & S_IXGRP))
        mini_printf("S");
    else if ((sb.st_mode & S_ISGID) && (sb.st_mode & S_IXGRP))
        mini_printf("s");
    else
        mini_printf((sb.st_mode & S_IXGRP) ? ("x") : ("-"));
}

void guid(struct stat sb)
{
    mini_printf(sb.st_mode & S_IROTH ? "r" : "-");
    mini_printf(sb.st_mode & S_IWOTH ? "w" : "-");
    if ((sb.st_mode & S_ISVTX) && !(sb.st_mode & S_IXOTH))
        mini_printf("T ");
    else if ((sb.st_mode & S_ISVTX) && (sb.st_mode & S_IXOTH))
        mini_printf("t ");
    else
        mini_printf((sb.st_mode & S_IXOTH) ? ("x ") : ("- "));
}
