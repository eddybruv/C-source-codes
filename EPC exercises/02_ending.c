/**
 * Date: 03-10-2021
 * by eddybruv
 **/

#include <string.h>
#include <stdbool.h>

bool confirmEnding(const char *str,const char *target)
{
    int targetLength = strlen(target);
    int strLength = strlen(str);

    if(strLength < targetLength){
        return false;
    }

    int posOfStr = strLength - targetLength;
    int posOfTarget = 0;

    while(str[posOfStr] != '\0'){
        if(str[posOfStr] != target[posOfTarget]){
            return false;
        }

        posOfStr++;
        posOfTarget++;
    }

    return true;
}