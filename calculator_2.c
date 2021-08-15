/*Date: 15-08-2021
    by eddybruv
    */

#include <stdio.h>

int main(void){
    float x, y;
    char operator;

    printf("\nEnter 1st num: ");
    scanf("%f", &x);

    printf("Enter operator: ");
    getchar();
    operator = getchar();

    printf("Enter 2nd number: ");
    scanf("%f", &y);

    if(operator == '+')
        printf("\nNum1 + Num2: %.2f", y + x);

    else if(operator == '-')
        printf("\nNum1 - Num2: %.2f", x - y);

    else if(operator == '/')
        printf("\nNum1 / Num2: %.2f", x / y);

    else if(operator == '%')
        printf("\nNum1 %% Num2: %.2d",((int)x % (int)y));

    else printf("\nEnter a valid operator");

    printf("\n\n");
    return 0;
}