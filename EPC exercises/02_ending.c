/**
 * Date: 03-10-2021
 * by eddybruv
 **/

#include <string.h>
#include <stdbool.h>

bool confirmEnding(char *arr, char terminal)
{
    int len = strlen(arr);
    if(arr[len] == terminal)
        return true;
    return false;
}