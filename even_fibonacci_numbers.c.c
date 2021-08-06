/*Date: 06-08-2021
    by eddybruv
    exercise from projecteuler.net*/

#include <stdio.h>

int main(void){
    int term_1 = 1, term_2 = 2, next_term, sum = 2;
    for(int i = 0; next_term < 4000000; i++){
        next_term = term_1 + term_2;
        
        if(next_term % 2 == 0){
            sum += next_term;
        }

        term_1 = term_2;
        term_2 = next_term;
        
    }
    printf("The sum is: %d", sum);

    return 0;
}

