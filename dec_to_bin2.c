/*Date : 11-07-2021
by eddybruv
*/

//This piece of code takes in a decimal and prints its binary equivalent in 32bits!

#include<stdio.h>

int main(void){
    int dec_num,right_shift,bin_num;
    printf("Enter any decimal number: ");
    scanf("%d",&dec_num);

    printf("The binary equivalent is: ");

    //this for loop does the bitwise right shift operation between the decimal number and right shift variable
    for(right_shift = 31; right_shift >= 0; right_shift--){
        bin_num = dec_num >> right_shift;
        if (bin_num & 1)
        printf("1");
        else
        printf("0");
    }
    return 0;
}