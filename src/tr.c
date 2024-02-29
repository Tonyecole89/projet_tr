/*
 * E89 Pedagogical & Technical Lab
 * project:     tr
 * created on:  2023-12-15 - 12:12 +0100
 * 1st author:  tony.yam - tony.yam
 * description: tr
 */

#include "regroupe.h"

int tr(int argc, char **argv)
{
    int i;
    int compteur_pas_tiret;

    i = 1;
    compteur_pas_tiret = 0;
    while (i <= argc - 1) {
        if (argv[i][0] != '-') {
            compteur_pas_tiret = i;
        }
        i = i + 1;
    }
    search_tiret(argc, argv, compteur_pas_tiret);
    return (0);
}
