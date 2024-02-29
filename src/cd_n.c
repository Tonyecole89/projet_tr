/*
 * E89 Pedagogical & Technical Lab
 * project:     Chapitre 2
 * created on:  2024-01-14 - 18:55 +0100
 * 1st author:  tony.yam - tony.yam
 * description: cd_n
 */

#include "regroupe.h"

int cd_n(char **argv, int compteur, char *buffer, int reader)
{
    if (have_a_n(argv, compteur) == 1) {
        wbcdt(argv, buffer, reader, compteur);
    }
    return (0);
}
