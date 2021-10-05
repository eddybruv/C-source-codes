/**
 * Date: 05--10-2021
 * by eddybruv
 **/

#include <string.h>                  //for memcpy() function

char* spinalCase(char *str)          //function to return a string
{
    int i;                           //initialise variable i which is later used for subscripting
    for(int i = 0; i != '\n'; i++)   //for loop to loop through every character in the string
        if(str[i] == ' ')            //checks if present character is a space character 
            memcpy(str+i, "-", 1);   //if so, then it replaces the character with a hyphen(-)
    return str;                      //returns string
}