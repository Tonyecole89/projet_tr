/*
 * E89 Pedagogical & Technical Lab
 * project:     Chapitre 2
 * created on:  2024-01-14 - 19:02 +0100
 * 1st author:  tony.yam - tony.yam
 * description: lec_chaine_supp
 */

#include <unistd.h>
#include "regroupe.h"

char *lec_chaine_supp(char **argv, char *buffer, int reader, int compteur)
{
    int compt;
    int c_arg;
    int decal;

    compt = 0;
    c_arg = 0;
    decal = 0;
    while (c_arg != longueur(argv[compteur])) {
        while (compt < reader) {
            if (buffer[compt] == argv[compteur][c_arg]) {
                reader = reader - 1;
                decal = 1;
            } else if (buffer[compt] != argv[compteur][c_arg] && decal == 1) {
                buffer[compt - 1] = buffer[compt];
            }
            compt = compt + 1;
        }
        decal = 0;
        c_arg = c_arg + 1;
        compt = 0;
    }
    buffer[reader - 1] = '\n';
    buffer[reader] = '\0';
    write(1, buffer, reader + 1);
    return (buffer);
}
