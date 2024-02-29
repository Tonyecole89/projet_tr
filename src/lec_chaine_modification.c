/*
 * E89 Pedagogical & Technical Lab
 * project:     Chapitre 2
 * created on:  2024-01-14 - 19:03 +0100
 * 1st author:  tony.yam - tony.yam
 * description: lec_chaine_modification
 */

#include "regroupe.h"

char *lec_chaine_modification(char **argv, char *buffer, int reader)
{
    int compt;
    int compt_arg;

    compt = 0;
    compt_arg = 0;
    while (compt_arg != longueur(argv[2])) {
        while (compt < reader) {
            if (buffer[compt] == argv[1][compt_arg]) {
                buffer[compt] = argv[2][compt_arg];
            }
            compt = compt + 1;
        }
        compt_arg = compt_arg + 1;
        compt = 0;
    }
    return (buffer);
}
