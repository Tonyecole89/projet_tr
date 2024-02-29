/*
 * E89 Pedagogical & Technical Lab
 * project:     Chapitre 2
 * created on:  2024-01-14 - 18:59 +0100
 * 1st author:  tony.yam - tony.yam
 * description: cd
 */

#include "regroupe.h"

char *cd(char *buffer_cdtemp, char *buffer_cd)
{
    int c_t;

    c_t = 0;
    while (buffer_cdtemp[c_t] != '\0' && buffer_cdtemp != 0) {
        buffer_cd[longueur(buffer_cd)] = buffer_cdtemp[c_t];
        c_t = c_t + 1;
    }
    return (buffer_cd);
}
