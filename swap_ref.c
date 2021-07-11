/* Date : 11-07-2021
    by eddybruv
    */

#include<stdio.h>

int *var1,*var2;

void swap(int *,int *){
    int temp;
    temp = *var1;
    *var1 = *var2;
    *var2 = temp;
}

int main(void){
    printf("Enter two values to be swapped say a and b: ");
    scanf("%d %d",&var1,&var2);

    swap(&var1, &var2);

    printf("Now A is %d and B is %d", var1,var2);
    return 0;
}