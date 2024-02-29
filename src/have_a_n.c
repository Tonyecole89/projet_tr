/*
 * E89 Pedagogical & Technical Lab
 * project:     Chapitre 2
 * created on:  2024-01-14 - 18:58 +0100
 * 1st author:  tony.yam - tony.yam
 * description: have_a_n
 */

#include "regroupe.h"

int have_a_n(char **argv, int compteur)
{
    int have_n;
    int compt;

    have_n = 0;
    compt = 0;
    while (argv[compteur][compt] != '\0') {
        if (argv[compteur][compt] == '\\') {
            if (argv[compteur][compt + 1] == 'n') {
                have_n = 1;
            }
        }
        compt = compt + 1;
    }
    return (have_n);
}
