/*
 * E89 Pedagogical & Technical Lab
 * project:     Chapitre 2
 * created on:  2024-01-14 - 18:59 +0100
 * 1st author:  tony.yam - tony.yam
 * description: lec_tra
 */

#include <unistd.h>
#include "regroupe.h"

int lec_tra(char **argv, char *buffer, int reader)
{
    char *buffer_modif;

    buffer_modif = lec_chaine_modification(argv, buffer, reader);
    buffer_modif[reader + 1] = '\n';
    write(1, buffer_modif, reader);
    return (0);
}
