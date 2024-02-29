/*
 * E89 Pedagogical & Technical Lab
 * project:     Chapitre 2
 * created on:  2024-01-14 - 18:44 +0100
 * 1st author:  tony.yam - tony.yam
 * description: combinaison_cd
 */

#include "regroupe.h"

int combinaison_cd(char **argv, int cd, int c_and_d)
{
    if (c_and_d == 2) {
        cd = 2;
    } else if (longueur(argv[1]) != longueur(argv[2]) && cd ==  0) {
        cd = 5;
    } if (cd == 2) {
    }
    return (cd);
}
