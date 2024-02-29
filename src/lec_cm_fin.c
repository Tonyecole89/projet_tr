/*
 * E89 Pedagogical & Technical Lab
 * project:     Chapitre 2
 * created on:  2024-01-14 - 18:58 +0100
 * 1st author:  tony.yam - tony.yam
 * description: lec_cm_fin
 */

#include <unistd.h>
#include <stdlib.h>
#include "regroupe.h"

int lec_cm_fin(char *buffer_cd, int long_total)
{
    buffer_cd[long_total] = '\0';
    write(1, buffer_cd, long_total);
    free(buffer_cd);
    return (0);
}
