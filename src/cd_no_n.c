/*
 * E89 Pedagogical & Technical Lab
 * project:     Chapitre 2
 * created on:  2024-01-14 - 18:54 +0100
 * 1st author:  tony.yam - tony.yam
 * description: cd_no_n
 */

#include "regroupe.h"

int cd_no_n(int long_total, char *buffer_cdtemp, char *buffer_cd)
{
    long_total = long_total + longueur(buffer_cdtemp);
    buffer_cd = cd(buffer_cdtemp, buffer_cd);
    return (long_total);
}
