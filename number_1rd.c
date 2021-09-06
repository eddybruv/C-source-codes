/**
 * Date: 06-09-2021
 * by eddybruv
 
 * Exercise from @BinaryByter

 * Implement a program that adds the ordinal
 * suffixes to a number and prints them
 * 
 * Examples 
 * 5 becomes 5th
 * 2 becomes 2nd
 * 11 becomes 11th
 * 3 becomes 3rd
 * 
 **/

#include <stdio.h>
#include <string.h>

int main(void)
{
    int num;
    
    printf("Enter position please: ");
    scanf("%d", &num);

    if(num % 10 == 1 && num != 11)
        printf("%d becomes %d%s", num, num, "st");
    else if(num % 10 == 2 && num != 12)
        printf("%d becomes %d%s", num, num, "nd");
    else if(num % 10 == 3 && num != 13)
        printf("%d becomes %d%s", num, num, "rd");
    else 
        printf("%d becomes %d%s", num, num, "th");

    return 0;
}