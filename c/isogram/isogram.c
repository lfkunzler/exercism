#include "isogram.h"
#include <stdbool.h>
#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

bool is_isogram(const char phrase[])
{
    unsigned int already_seen['z'-'a'+1] = {0};

    if (!phrase)
        return 0;

    size_t phrase_len = strlen(phrase);

    for (size_t i=0; i<phrase_len; i++) {
        char aux = toupper(phrase[i]);
        if (aux < 'A' || aux > 'Z')
            continue;
        already_seen[aux-'A']++;
        if (already_seen[aux-'A'] > 1)
            return false;
    }
    return true; 
}
