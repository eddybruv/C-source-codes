#include <stdio.h>

int main(void)
{
    int ch, i = 1;
    printf("Enter a message in brackets: ");
    while((ch = getchar()) != '\n'){
        if(i ==1)
            printf("Sentence:", i++);
        if(ch == ')' || ch == '(')
            ch = ' ';
        putchar(ch);
    }

    return 0;
}