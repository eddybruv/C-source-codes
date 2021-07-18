/*Date: 18-07-2021
    by eddybruv
    exercise from hackerrank.com
*/


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,count = 0;
    scanf("%d", &n);
    int *arr = (int*)malloc(n*sizeof(int));//allocate memory dynamically
    for(int i = 0;i < n;i++){
        scanf("%d",&arr[i]);
        count += arr[i];
    }        
    
    printf("%d",count);
    return 0;
}