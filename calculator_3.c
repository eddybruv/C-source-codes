/*Date: 15-08-2021
    by eddybruv
    */

#include <stdio.h>
#include <stdlib.h>

int operator; //external variable

/* Prorotypes */

void options(void);
void greet (void);
void choice(void);
void operations(int, int, int);
void input(void);

//main function

int main(void){
    greet();
    for (;;) {
        choice();
    }
    return 0;
}

/* *********************************
 * Prints the options of operation * 
 * *********************************/

void options(void){
    printf("\n        OPTIONS \n");
    printf("=======================\n");
    printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Exit\n");
    printf("=======================\n");
}

/****************************************
 *  Prints Salutation and calls option()*
 ****************************************/

void greet(void){
    printf("\nHello I'm here to make your life easier\n");
    options();
}


/* ********************************
 * Gets the options of operation  *
 * Ends program if operation is 5 *
 * ********************************/

void choice(void){
    printf("\nEnter your choice(1-5): ");
    scanf("%d", &operator);

    if(operator == 5)
        exit(1);

    else input();
}

/************************************
 * Gets input(numbers) from the user*
 * Calls operations()               *
 * **********************************/

void input(void){
    int x, y;
    printf("\nEnter any two numbers: ");
    scanf("%d, %d", &x, &y);
    operations(operator, x, y);
}

/*******************
 * Does arithmetics*
 * *****************/

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
