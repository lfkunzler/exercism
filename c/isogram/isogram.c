#include "isogram.h"
#include <stdio.h>
#include <string.h>

char char2upper(char letter);

bool is_isogram(const char phrase[])
{
    char aux;
    unsigned int max = 1;
    size_t i, str_len;
    unsigned int alphabet['z'-'a'+1] = {0};

    if (!phrase)
        return 0;

    str_len = strlen(phrase);

    for (i=0; i<str_len; i++) {
        aux = char2upper(phrase[i]);
        if (aux < 'A' || aux > 'Z')
            continue;
        printf("aux :: %c\n", aux);
        alphabet[aux-'A']++;
        if (alphabet[aux-'A'] > max)
            max = alphabet[aux-'A'];
    }
    return max == 1; 
}

char char2upper(char letter)
{
    return letter & 0xDF;
}
