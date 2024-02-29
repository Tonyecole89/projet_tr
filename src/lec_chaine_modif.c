/*
 * E89 Pedagogical & Technical Lab
 * project:     Chapitre 2
 * created on:  2024-01-14 - 18:44 +0100
 * 1st author:  tony.yam - tony.yam
 * description: lec_chaine_modif
 */

#include <stdlib.h>
#include "regroupe.h"

int lec_chaine_modif(int argc, char **argv, int compteur, int c_d)
{
    int reader;
    int long_total;
    char *buffer;
    char *buffer_cd;
    char *buffer_cdtemp;

    long_total = 0;
    buffer = malloc_buff();
    buffer_cd = malloc_buff();
    reader = -1;
    while (reader != 0 && argc <= 4 && argc > 2) {
        reader = for_read(buffer);
        if (c_d == 1 && reader != 0 && argc == 3) {
            lec_chaine_supp(argv, buffer, reader, compteur);
        } else if (c_d == 2 && reader != 0) {
            cd_n(argv, compteur, buffer, reader);
            if (have_a_n(argv, compteur) == 0) {
                buffer_cdtemp = lec_chaine_cd(argv, buffer, reader, compteur);
                long_total = cd_no_n(long_total, buffer_cdtemp, buffer_cd);
            }
        }
        lec_tra_or(c_d, argv, buffer, reader);
    }
    fi_lcm(buffer_cd, long_total, hn(argv, compteur, c_d), buffer);
    return (0);
}
