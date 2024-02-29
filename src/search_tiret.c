/*
 * E89 Pedagogical & Technical Lab
 * project:     Chapitre 2
 * created on:  2024-01-14 - 16:48 +0100
 * 1st author:  tony.yam - tony.yam
 * description: search_tiret
 */

#include "regroupe.h"

int search_tiret(int argc, char **argv, int compteur)
{
    int compt;
    int cd;
    int c_and_d;

    compt = 1;
    cd = 0;
    c_and_d = 0;
    while (compt <= argc - 1 && argc <= 4 && argc >= 2) {
        if (argv[compt][0] == '-') {
            cd = condition_tiret_cd(argv, compt, cd);
            c_and_d = condition_tiret_c_n_d(argv, compt, c_and_d);
        }
        compt = compt + 1;
    }
    if (cd != 4) {
        cd = combinaison_cd(argv, cd, c_and_d);
        if (cd == 5) {
            return (1);
        }
        lec_chaine_modif(argc, argv, compteur, cd);
    } else {
        helper(argv);
    }
    return (0);
}
