/**
 * Date: 02-10-2021
 * by eddubruv
 **/

#include <stdio.h>

int main(void){

    //initialising and defining variables
    int i, i2, j, sum = 0;             
    //promting the user an collecting variables i.e the min and max variable.
    //making sure the smaller interger comes before the bigger one.
    printf("Enter two numbers: ");
    scanf("%d, %d", &i, &j);

    //swaps the numbers if the 2nd input is greater than the first.
    if(j < i){
        int temp = i;
        i = j;
        j = temp;
    }
    //saving the variable for later
    i2 = i;

    //for loop that adds the value of i(notice that i is being incremented after every iteration) to sum.
    //the loop ends when i == j.
    for(i; i <= j; i++)
        sum += i;

    //printing the range sum and the sum of the two initial numbers.
    printf("Range sum: %d\n", sum);
    printf("Sum of numbers: %d", i2 + j);
    return 0;
}