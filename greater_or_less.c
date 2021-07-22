#include <stdio.h>

int main(){
    int a;
    int b;
    printf("Enter the values to be compared please\n");
    scanf("%d%d", &a,&b);
    if(a==b) printf("These two numbers are equal\n");

    if(a < b){ 
        printf("The greater value is: %d\n", b);
        printf("And the lesser value is : %d\n, a");
    }
    else{ 
        printf("The greater value is: %d\n", a);
        printf("And the lesser value is: %d\n, b");
    }
    return 0;
}