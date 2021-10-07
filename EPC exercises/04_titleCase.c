/**
 * Beginner Level
 * 1️⃣ Title Case a Sentence
 * Return the provided string with the first letter of each word capitalized. Make sure the rest of the word is in lower case.
 * For the purpose of this exercise, you should also capitalize connecting words like the and of. 
 **/

#include <ctype.h>
#include <stdio.h>

char* caseTitle(const char *str)
{
    int i = 0, len = strlen(str);
    char new_str[len];
    for(i = 0; i < len; i++){
        if(isalpha(str[0]))
            new_str[0] = toupper(str[0]);
        
        if(str[i] == ' ')
        {
            new_str[i] = str[i];
            new_str[i+1] = toupper(str[i+1]);
            continue;
        }
        
        if(str[i - 1] != ' ')
            new_str[i] = tolower(str[i]);
    }

    new_str[++i] = '\0';

    return new_str;
}