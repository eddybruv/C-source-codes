#include <stdlib.h>
#include <string.h>

char *findMissingLetters(const char *str){
    int lenOfStr = strlen(str);

    int maxNumOfMissingLetters = str[lenOfStr - 1] - str[0] - 1;

    char *missingLetters = (char *) malloc(maxNumOfMissingLetters);

    char letter = str[0];
    int posOfStr = 0;

    int numOfMissingLetters = 0;
    while(posOfStr < lenOfStr){
        if(str[posOfStr] != letter){
            missingLetters[numOfMissingLetters] = letter;
            numOfMissingLetters++;
            letter++;
            continue;
        }

        letter++;
        posOfStr++;
    }

    return missingLetters;
}