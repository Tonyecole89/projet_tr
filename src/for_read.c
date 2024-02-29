/*
 * E89 Pedagogical & Technical Lab
 * project:     Chapitre 2
 * created on:  2024-01-14 - 18:50 +0100
 * 1st author:  tony.yam - tony.yam
 * description: for_read
 */

#include <unistd.h>
#include "regroupe.h"

int for_read(char *buffer)
{
    int reader;

    reader = 0;
    reader = read(0, buffer, 100);
    if (reader == -1) {
        write(1, "probleme de read\n", 17);
        return (1);
    }
    return (reader);
}
