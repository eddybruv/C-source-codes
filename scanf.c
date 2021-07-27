/*Date: 26-07-2021
    by eddybruv
    exercise from Fody*/

#include <stdio.h>
#include <string.h>

int main(void){
    char arr[5];
    printf("Enter two strings with one in paranthes: ");
    scanf("hello( %s )", arr);
    printf("The word between the parenthesis is: %s", arr);
    printf("\n");
    return 0;
}
