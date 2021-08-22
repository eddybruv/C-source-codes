/*Date : 22-08-2021
    by eddybruv*/

#include <stdio.h>
#include <stdbool.h>

int main(void){
    bool arr[10];
    int count = 0;
    printf("Enter elements into the array: ");
  
    for (int i = 0; i < 10; i++)
        scanf("%d", &arr[i]);
    
    printf("The number of truthy values are: ");
    for(int i = 0; i < 10; i++){
        if(arr[i])
            count++;
    }
    printf("%d", count);
}