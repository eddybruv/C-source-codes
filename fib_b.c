#include <stdio.h>

int fibonacci(int );

int main(void){
    int n;
    printf("Enter the term: ");
    scanf("%d", &n);
    printf("The %dth term is: %d", n, fibonacci(n));
    return 0;
} 

int fibonacci(int n){
    if(n == 0)
        return 0;
    if(n == 1)
        return 1;
    
    return fibonacci(n - 1) + fibonacci(n - 2);
    
}