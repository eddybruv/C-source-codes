#include<stdio.h>

int main(void){
    float decimal_number;
    printf("input your floating point number: ");
    scanf("%f", &decimal_number);
    printf("\nDecimal part: %d", (int)decimal_number);
    return 0;
}

//int(float)