/**
 * Date: 02-10-2021
 * by eddubruv
 **/

#include <stdio.h>

#define LEN 30

int main(void){
    char sentence[LEN + 1];
    int max_len = 0, word_len = 0, i = 0, ch;

    printf("Enter sentence: ");

    while((ch = getchar()) != '\n' && i < LEN){
        sentence[i++] = ch;
    }

    sentence[i] = '\0';

    for(i = 0; sentence[i] != '\0'; i++){
        if(sentence[i] == ' '){
            word_len = 0;
            continue;
        }
        word_len++;
        if(word_len >= max_len)
            max_len = word_len; 
    }

    printf("Max word length is: %d", max_len);
    
}