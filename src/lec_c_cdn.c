/*
 * E89 Pedagogical & Technical Lab
 * project:     Chapitre 2
 * created on:  2024-01-14 - 19:00 +0100
 * 1st author:  tony.yam - tony.yam
 * description: lec_c_cdn
 */

#include <stdlib.h>
#include "regroupe.h"

char *lec_c_cdn(char **argv, char *buffer, int reader, int compteur)
{
    int compt;
    int compt_buff;
    char *buffer_temp;
    int compt_temp;

    compt = 0;
    compt_buff = 0;
    compt_temp = 0;
    buffer_temp = malloc_buff();
    while (compt_buff != reader) {
        compt = 0;
        while (compt <= longueur(argv[compteur]) - 3) {
            if (argv[compteur][compt] == buffer[compt_buff]) {
                buffer_temp[compt_temp] = buffer[compt_buff];
                compt_temp = compt_temp + 1;
            }
            compt = compt + 1;
        }
        compt_buff = compt_buff + 1;
        compt = 0;
    }
    buffer = buffer_cd(compt, compt_temp, buffer, buffer_temp);
    free(buffer_temp);
    return (buffer);
}
