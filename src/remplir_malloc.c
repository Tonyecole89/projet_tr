/*
 * E89 Pedagogical & Technical Lab
 * project:     Chapitre 2
 * created on:  2024-01-14 - 19:02 +0100
 * 1st author:  tony.yam - tony.yam
 * description: remplir_malloc
 */

#include "regroupe.h"

char *remplir_malloc(char *buffer)
{
    int i;

    i = 0;
    while (i < 101) {
        buffer[i] = '\0';
        i = i + 1;
    }
    return (buffer);
}
