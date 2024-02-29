/*
 * E89 Pedagogical & Technical Lab
 * project:     Chapitre 2
 * created on:  2024-01-14 - 18:42 +0100
 * 1st author:  tony.yam - tony.yam
 * description: condition_tiret_c_n_d
 */

#include "regroupe.h"

int condition_tiret_c_n_d(char **argv, int compt, int c_and_d)
{
    if (argv[compt][1] == 'd') {
        c_and_d = c_and_d + 1;
    } else if (argv[compt][1] == 'c') {
        c_and_d = c_and_d + 1;
    }
    return (c_and_d);
}
