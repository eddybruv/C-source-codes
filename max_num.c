/* Date : 11-07-2021
    by eddybruv
    */

#include<stdio.h>

int main(void){
    int arr[7];
    int max_number = arr[0];


    printf("Enter any 7 numbers in random form: ");
    for (int i = 0; i < 7;i++)
        scanf("%d",&arr[i]);

    for (int i = 0; i < 7;i++){
        if (max_number < arr[i])
            max_number = arr[i];
    }

    printf("The maximum number is : %d",max_number);
    return 0;
}