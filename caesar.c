/*  Date: 14-07-2021
    by eddybruv
    */


#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>

int main(int argc,char argv[]){

    //check number of arguments
    if(argc != 2 || !isdigit(argv[1])){

        printf("Usage : ./caesar key");
        return 1;
    }

    //converts argv(1) from string to interger
    int key;
    key = atoi(argv[1]);

    //get plaintext to covert/encrypt
    printf("Enter Text: ");
    char plaintext[30];
    scanf("%[^\n]s",plaintext);

    //loop through text
    for (int i = 0; i < strlen(plaintext); i++){

        if(isupper(plaintext[i])){
            //get modulo number and add to appropriate case
            printf("%c", 'A' + (plaintext[i] - 'A' + key) % 26);
            
        }

        else if(islower(plaintext[i])){

            printf("%c", 'A' + (plaintext[i] - 'A' + key) % 26);
        }

        else{
            printf("%c", plaintext[i]);
        }
    }

    printf("\n");

    return 0;
}