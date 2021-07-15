/* Date: 14-07-2021
    by eddybruv
    */


#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<cs50.h>
#include<stdlib.h>


//takes argument from command line
int main(int argc, string argv[]){

    //if argument is less or greater then 2, shoot error
    if (argc != 2){

        printf("Usage: ./caesar key");
        return 1;
    }

    //converts key from string to int
    int key = atoi(argv[argc - 1]);

    char plainText[100];
    //promt user for text
    printf("Enter text: ");
    scanf("%[^\n]s", plainText);

    //declare cipherText array of characters
    char ciphertext[strlen(plainText)];

    //iterate over plaintext and encrypt each item
    for (int i = 0; i < strlen(plainText); i++){

        //convert each item to (plainkey + key)
        if (isalpha(plainText[i])){

            //checking for uppercase characters
            if(isupper(plainText[i])){

                ciphertext[i] = (((plainText[i] - 65 + key) % 26) + 65);
            }

            else{

                //checking for lower cases
                if(islower(plainText[i])){

                    ciphertext[i] = (((plainText[i] - 97 + key) % 26) + 97);

                }
            }
        }

        //leaving all non alphabet characters untouched
        else{
            ciphertext[i] = plainText[i];
        }
    } 

    printf("Cipher text: %s\n", ciphertext);
    
    return 0;
}