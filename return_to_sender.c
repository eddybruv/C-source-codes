/**
 * Date: 22-09-2021
 * by eddybruv
 **/


/*

RETURN TO SENDER!
+===============+

A boomerang is a V-shaped sequence that is either upright or upside down. Specifically, a boomerang can be defined as: sub-array of length 3, with the first and last digits being the same and the middle digit being different.

[3, 7, 3], [1, -1, 1], [5, 6, 5]

**Create a function that returns the total number of boomerangs in an array.**

[3, 7, 3, 2, 1, 5, 1, 2, 2, -2, 2]
// 3 boomerangs in this sequence:  [3, 7, 3], [1, 5, 1], [2, -2, 2]


countBoomerangs([9, 5, 9, 5, 1, 1, 1]) ➞ 2

countBoomerangs([5, 6, 6, 7, 6, 3, 9]) ➞ 1

countBoomerangs([4, 4, 4, 9, 9, 9, 9]) ➞ 0

Notes

[5, 5, 5] (triple identical digits) is NOT considered a boomerang because the middle digit is identical to the first and last.
*/

#include <stdio.h>

int count_boomerangs(int *, int);

int main(void)
{
    int arr1[] = {9, 5, 9, 5, 1, 1, 1};
    int arr2[] = {5, 6, 6 ,7, 6, 3, 9};
    int arr3[] = {4, 4, 4, 9, 9, 9, 9};
    int arr4[] = {3, 7, 3, 2, 1, 5, 1, 2, 2, -2, 2};

    printf("Array 1: %d boomarangs\n", count_boomerangs(arr1, 7));
    printf("Array 2: %d boomarangs\n", count_boomerangs(arr2, 7));
    printf("Array 3: %d boomarangs\n", count_boomerangs(arr3, 7));
    printf("Array 4: %d boomarangs\n", count_boomerangs(arr4, 11));

    return 0;
}

int count_boomerangs(int arr[], int size)
{
    
    int i;
    int count = 0;

    for(i = 0; i < size - 2; i++)
    {
        if((arr[i] == arr[i + 2]) && arr[i] != arr[i+1])
         count++;
    }

    return count;
}