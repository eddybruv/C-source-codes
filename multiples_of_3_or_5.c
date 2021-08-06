/*Date: 06-08-2021
    by eddybruv
    from projecteuler.net
    */

#include <stdio.h>

int main(void){
    int sum = 0;

    for(int i = 0;i < 1000;i++){
        if(i % 3 == 0 || i % 5 == 0){
            sum += i;
            printf("%d, ",i);
        }
    }

    printf("\nThe sum of all multiples of 3 or 5 below 1000 is: %d", sum);
    return 0;
}