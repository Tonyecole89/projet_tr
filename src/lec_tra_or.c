/*
 * E89 Pedagogical & Technical Lab
 * project:     Chapitre 2
 * created on:  2024-01-14 - 18:57 +0100
 * 1st author:  tony.yam - tony.yam
 * description: lec_tra_or
 */

#include "regroupe.h"

int lec_tra_or(int c_d, char **argv, char *buffer, int reader)
{
    if (c_d == 0 && longueur(argv[1]) == longueur(argv[2])) {
        lec_tra(argv, buffer, reader);
    }
    return (0);
}
