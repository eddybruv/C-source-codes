/*Date : 22-08-2021
    by eddybruv*/

#include <stdio.h>
#include <stdbool.h>

bool presents(int, int);

int main(void){
    int mm,dd;
    printf("What month and day is it: ");
    scanf("%d/%d", &dd, &mm);

    presents(dd, mm);

    if(presents(dd, mm))
        printf("Presents are on the way!");

    else printf("No presents for you!");
}

bool presents(int dd, int mm)
{
    if(mm == 12 && (dd == 24 || dd == 25))
        return true;
    else 
        return false;
}