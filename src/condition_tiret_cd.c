/*
 * E89 Pedagogical & Technical Lab
 * project:     Chapitre 2
 * created on:  2024-01-14 - 18:43 +0100
 * 1st author:  tony.yam - tony.yam
 * description: condition_tiret_cd
 */

#include "regroupe.h"

int condition_tiret_cd(char **argv, int compt, int cd)
{
    if (argv[compt][1] == 'h') {
        cd = 4;
    } else if (argv[compt][1] == 'd') {
        cd = 1;
    } else if (argv[compt][2] == 'c' || argv[compt][2] == 'd') {
        cd = 2;
    } else if (argv[compt][1] == 'c') {
        cd = 0;
    }
    return (cd);
}
