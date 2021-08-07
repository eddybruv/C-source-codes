/*Date: 07-08-2021
    by eddybruv
    */

#include <stdio.h>

int main(void){
    int i, j, product,count = 0, reverse, product_1;
    for(i = 100;i <= 999;i++){
        for(j = 100;j <= 999;j++){
            product = i * j;
            printf("%d, ", product);
            product_1 = product;
            while(product != 0){
                reverse = product % 10;
                count = count * 10 + reverse;
                product = product / 10;
            }
            
            if(product_1 ==  count){
                printf("The palindrome number is: %d", count);
                break;
            }
        }    
    }
    return 0;
}