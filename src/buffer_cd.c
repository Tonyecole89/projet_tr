/*
 * E89 Pedagogical & Technical Lab
 * project:     Chapitre 2
 * created on:  2024-01-14 - 19:01 +0100
 * 1st author:  tony.yam - tony.yam
 * description: buffer_cd
 */

#include <stdlib.h>
#include "regroupe.h"

char *buffer_cd(int compt, int compt_temp, char *buffer, char *buffer_temp)
{
    compt = 0;
    if (compt_temp == 0) {
        buffer = malloc(sizeof (char) * 1);
    } else if (compt != compt_temp) {
        buffer = remplir_malloc(buffer);
        while (compt != compt_temp) {
            buffer[compt] = buffer_temp[compt];
            compt = compt + 1;
        }
    }
    return (buffer);
}
