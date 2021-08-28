#include <stdio.h>

int main(void){
    int arr[2][4];

    printf("Enter the array elements: ");

    for (int i = 0; i < 2; i++){
        for(int j = 0; j < 4; j++){
            scanf("%d", &arr[i][j]);
        }
    }

    printf("The sum of the 2nd elements is: %d", arr[0][1] + arr[1][1]);

    return 0;
}