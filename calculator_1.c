/*Date: 15 - 08 - 2021
    by eddybruv
    */

#include <stdio.h>

int main(void){
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d, %d", &a, &b);

    printf("\nAddition: %d", a + b);
    printf("\nSubtraction(num_1 - num_2): %d", a - b);
    printf("\nSubtraction(num_2 - num_1): %d", b - a);
    printf("\nDivision(num_1 / num_2): %.2f", (float)(a / b));
    printf("\nDivision(num_2 / num_1): %.2f", (float)(b / a));
    printf("\nMod(num_1 %% mod_2): %d", a % b);
    printf("\nMod(num_2 %% mod_1): %d", b % a);


    printf("\n");

    return 0;
}