/* Date: 09-07-2021
    by : eddybruv*/

#include<stdio.h>
#include<string.h>

int main (void){
    
    int characters = 0;
    char text[100];
    printf("Text: ");
    scanf("%[^\n]s",text);
    int n = strlen (text);
    
    printf("%d", n);
    return 0;
}