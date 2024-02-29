/*
 * E89 Pedagogical & Technical Lab
 * project:     Chapitre 2
 * created on:  2024-01-14 - 18:57 +0100
 * 1st author:  tony.yam - tony.yam
 * description: hn
 */

#include "regroupe.h"

int hn(char **argv, int compteur, int c_d)
{
    int have_n;
    int compt;

    have_n = 0;
    compt = 0;
    if (c_d == 2) {
        while (argv[compteur][compt] != '\0') {
        if (argv[compteur][compt] == '\\') {
            if (argv[compteur][compt + 1] == 'n') {
                have_n = 1;
            }
        }
        compt = compt + 1;
        }
    } else if (c_d == 1) {
        have_n = 2;
    }
    return (have_n);
}
