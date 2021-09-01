/**
 * Date: 01-09-2021
 * by eddybruv
 * 
 * Given a string containing only the characters x and y, 
 * find whether there are the same number of Xs and Ys
 * */

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

#define N 20
bool balanced(char *, int);

int main(void)
{
    char str[N];
    int len;
    printf("Enter a series of Xs and Ys: ");
    scanf("%s", str);
    len = strlen(str);

    if(balanced(str, len))
        printf("Balanced!");
    else
        printf("Not Balanced!");

    return 0;
}

bool balanced(char str[], int len)
{
    int count_x = 0, count_y =  0;
    for(int i = 0; i < len; i++)
    {
        if(tolower(str[i]) == 'x')
            count_x++;
        if(tolower(str[i]) == 'y')
            count_y++;
    }

    if(count_x == count_y)
        return true;
    else
        return false;
}