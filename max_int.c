/* Date ; 16-07-2021
    codes from hackerrank.com
    by eddybruv
    */

#include <stdio.h>

int max_of_four(int a, int b, int c, int d){
    if(a > b && a > c && a > d)
        return a;
    else if(b > a && b > c && b > d)
        return b;
    else if(c > b && c > a && c > d)
        return c;
    else {
        return d;
    }
}


int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}