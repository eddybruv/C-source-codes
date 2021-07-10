/* Date: 08-09-2021
    by: eddybruv*/

#include<stdio.h>


int main(){
    int num;
    int i;
    long int rem[10];
    printf("Enter number: ");
    scanf("%d",&num);

    //does the arithmetic and stores the remainders in an array
    for (int i = 0; num > 0; i++){
        
        rem[i] = num % 2; 
        printf("\nBinary in rem[%d] is %d",i,rem[i]);
        num = num / 2;
    }
    
    
    printf("\nBinary number: ");
    //encountered problems in printing
    for (i = i - 1; i >=  0; i--){
        
        printf("%ld", rem[i]);
    }
    
    return 0;  
}
