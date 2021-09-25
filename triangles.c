/**
 * Date: 25-09-2021
 * by eddybruv
 **/

/*
Holes! Triangles! Maths!
+==================+

Create a function that takes the dimensions of two triangles (as arrays) and checks if the first triangle fits into the second one.

doesTriangleFit([1, 1, 1], [1, 1, 1]) ➞ true

doesTriangleFit([1, 1, 1], [2, 2, 2]) ➞ true

doesTriangleFit([1, 2, 3], [1, 2, 2]) ➞ false

doesTriangleFit([1, 2, 4], [1, 2, 6]) ➞ true
*/

#include <stdio.h>
#include <stdbool.h>

bool does_triangle_fit(int *, int *);

int main(void)
{
    int arr1[] = {1, 1, 1};
    int arr2[] = {2, 2, 2};
    int arr3[] = {1, 2, 3};
    int arr4[] = {1, 2, 2};
    int arr5[] = {1, 2, 4};
    int arr6[] = {1, 2, 6};

    printf("\ndoesTriangleFit([1, 1, 1], [1, 1, 1]) -> %s\n", does_triangle_fit(arr1, arr1)? "true":"false");
    printf("doesTriangleFit([1, 1, 1], [2, 2, 2]) -> %s\n", does_triangle_fit(arr1, arr2)? "true":"false");
    printf("doesTriangleFit([1, 2, 3], [1, 2, 2]) -> %s\n", does_triangle_fit(arr3, arr4)? "true":"false");
    printf("doesTriangleFit([1, 2, 4], [1, 2, 6]) -> %s\n", does_triangle_fit(arr5, arr6)? "true":"false");
}

bool does_triangle_fit(int arr[], int arr_2[])
{
    int i = 0;
    for (i = 0; i < 3; i++){
        if(!(arr[i] <= arr_2[i]))
            return false;
    }
    return true;
}