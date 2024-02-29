/*
 * E89 Pedagogical & Technical Lab
 * project:     Chapitre 2
 * created on:  2024-01-14 - 19:01 +0100
 * 1st author:  tony.yam - tony.yam
 * description: malloc_buff
 */

#include <stdlib.h>
#include <unistd.h>
#include "regroupe.h"

char *malloc_buff()
{
    char *buffer;

    buffer = malloc(sizeof (char) * 101);
    buffer = remplir_malloc(buffer);
    if (!buffer) {
        write (1, "probleme de buffer\n", 19);
    }
    return (buffer);
}
