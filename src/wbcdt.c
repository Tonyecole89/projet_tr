/*
 * E89 Pedagogical & Technical Lab
 * project:     Chapitre 2
 * created on:  2024-01-14 - 18:55 +0100
 * 1st author:  tony.yam - tony.yam
 * description: wbcdt
 */

#include <unistd.h>
#include "regroupe.h"

int wbcdt(char **a, char *b, int r, int c)
{
    if (r != 0) {
        write(1, lec_c_cdn(a, b, r, c), longueur(lec_c_cdn(a, b, r, c)));
        write(1, "\n", 1);
    }
    return (0);
}
