/*
 * E89 Pedagogical & Technical Lab
 * project:     Chapitre 2
 * created on:  2024-01-14 - 19:33 +0100
 * 1st author:  tony.yam - tony.yam
 * description: helper
 */

#include <unistd.h>
#include "regroupe.h"

int helper(char **argv)
{
    char *help;
    int long_arg;

    long_arg = longueur(argv[0]);
    write(1, "Usage: ", 7);
    write(1, argv[0], long_arg);
    help = " [OPTION]... STRING1 [STRING2]\n"
        "Translate, squeeze, and/or delete characters from standard input,\n"
        "writing to standard output. STRING1 and STRING2 specify arrays of"
        "characters ARRAY1 and ARRAY2 that control the action.\n"
        "-c,                      use the complement of ARRAY1\n"
        "-d                       delete characters in ARRAY1,"
        "do not translate\n"
        "-h                       delete characters in ARRAY1,"
        " do not translate\n"
        "Translation occurs if -d is not given and both STRING1"
        "and STRING2 appear.\n";
    write(1, help, 486);
    return (0);
}
