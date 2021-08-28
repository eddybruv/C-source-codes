/** Write a program tat takes a list of list,
 *  and adds all the second elements of the list of list, 
 *  for example [ [ 2,4,6,7],[6,8,9,3]], ur function should add just 4 and 8
 */

#include <stdio.h>

int main(void){

    //declaration of a multidimensional array
    int arr[2][4];

    printf("Enter the array elements: ");

    /**storing the elements in the array
     * row first, then column
     * */

    for (int i = 0; i < 2; i++){
        for(int j = 0; j < 4; j++){
            scanf("%d", &arr[i][j]);
        }
    }

    printf("The sum of the 2nd elements is: %d", arr[0][1] + arr[1][1] /*these are the elements stored in the 2nd positions of each array*/);

    return 0;
}