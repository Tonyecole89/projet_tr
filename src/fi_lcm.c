/*
 * E89 Pedagogical & Technical Lab
 * project:     Chapitre 2
 * created on:  2024-01-14 - 18:56 +0100
 * 1st author:  tony.yam - tony.yam
 * description: fi_lcm
 */

#include <stdlib.h>
#include "regroupe.h"

int fi_lcm(char *buffer_cd, int long_total, int h_n, char *buffer)
{
    if (h_n == 0) {
        lec_cm_fin(buffer_cd, long_total);
    } else if (h_n == 1) {
        free(buffer_cd);
    } else if (h_n == 2) {
        free(buffer_cd);
        return (0);
    }
    free(buffer);
    return (0);
}
