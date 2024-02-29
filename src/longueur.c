/*
 * E89 Pedagogical & Technical Lab
 * project:     Chapitre 2
 * created on:  2024-01-14 - 19:03 +0100
 * 1st author:  tony.yam - tony.yam
 * description: longueur
 */

#include "regroupe.h"

int longueur(char *arg)
{
    int compt;

    compt = 0;
    while(arg[compt] != '\0') {
        compt = compt + 1;
    }
    return (compt);
}
