/* Date: 19-07-2021
    by eddybruv
    exercise from codechef.com
*/

#include <stdio.h>

int main(void){

    int a, b, n;
    printf("Enter number of digit pairs: ");
    scanf("%d", &n);
    int sum[n];

    for(int i = 0; i < n;i++){
        scanf("%d %d", &a, &b);
        sum[i] = a + b; 
    }

    for(int i = 0; i < n; i++){
        printf("%d\n",sum[i]);
    }

    return 0;
}