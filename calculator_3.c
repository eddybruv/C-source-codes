/*Date: 15-08-2021
    by eddybruv
    */

#include <stdio.h>
#include <stdlib.h>

int operator;

void options(void);
void greet (void);
void choice(void);
void operations(int, int, int);
void input(void);


int main(void){
    greet();
    for (;;) {
        choice();
    }
    return 0;
}

void options(void){
    printf("\n        OPTIONS \n");
    printf("=======================\n");
    printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Exit\n");
    printf("=======================\n");
}

void greet(void){
    printf("\nHello I'm here to make your life easier\n");
    options();
}

void choice(void){
    printf("\nEnter your choice(1-5): ");
    scanf("%d", &operator);

    if(operator == 5)
        exit(1);

    else input();
}

void input(void){
    int x, y;
    printf("\nEnter any two numbers: ");
    scanf("%d, %d", &x, &y);
    operations(operator, x, y);
}


void operations(int operator, int x, int y){
    switch(operator){
        case 1:
            printf("Num1 + Num2: %d\n", x + y);
            break;
        case 2:
            printf("Num1 - Num2: %d\n", x - y);
            break;
        case 3:
            printf("Num1 * Num2: %d\n", x * y);
            break;
        case 4:
            printf("Num1 / Num2: %.2f\n", (float) (x / y));
            break;
        case 5: 
            break;                     
    }

    printf("\n=======================\n");
}
