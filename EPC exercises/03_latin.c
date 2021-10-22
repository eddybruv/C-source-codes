/**
 * @file
 * @brief Translates a word to latin
 * @details
 * Problem Statement
 * Latin is a way of altering English Words. The rules are as follows:
 * If a word begins with a consonant, take the first consonant or consonant cluster, 
 * move it to the end of the word, and add ay to it.
 * If a word begins with a vowel, just add way at the end.
 * Example : 
 * For consonant : translateLatin("paragraphs") should return the string aragraphspay
 * For Vowel: translateLatin("eight") should return the string eightway.
 */

#include <assert.h> // for assert function
#include <stdlib.h> // for malloc function
#include <string.h> // for strlen, strcat, strncat, strcpy functions
#include <stdbool.h> // for bool data type

bool is_vowel(char letter){
    const char *vowels = "aeiou";

    while (*vowels){
        if(letter == *vowels++){
            return true;
        }
    }

    return false;
}

bool is_constant(char letter){

    const char *consonants = "bcdfghjklmnpqrstvwxyz";

    while (*consonants) {
        if(letter == *consonants)
            return true;
    }
    return false;
}

char *getLocationOfFirstNonConsonant (char *word){

    while (*word){
        if(!is_consonant(*word)) {
            //returns the position of the first non consonant letter
            return word;
        }

        word++; //increments to next letter in the word
    }

    return word;
}

char *translateToLatin (char *word){
    char *latin_word;

    if(is_vowel(word[0])) {

        latin_word = (char *) malloc (strlen(word) + 4);
        strcpy(latin_word, word);
        strcat(latin_word, "way");

        return latin_word; 
    }


    if(is_consonant(word[0])){
        latin_word = (char *) malloc(strlen(word) + 3);

        char *locationOfFirstNonConsonant = getLocationOfFirstNonConsonant(word);

        strcpy(latin_word, locationOfFirstNonConsonant);

        strncat(latin_word, word, locationOfFirstNonConsonant);
        strcat(latin_word, "ay");
        return latin_word;
    }

    //if word doesnt begin with a vowel or consonant, it copies the word into latin_word
    latin_word = (char *) malloc (strlen(word) + 1);
    strcpy(latin_word, word);
    return latin_word;
}

void test(void) {
    // The following lines tests the program of correct behaviour
    char *str = "224wa";
    char *solnStr = translateToLatin(str);
    assert(strcmp(solnStr, "224wa") == 0);
    free(solnStr);
    
    str = "paragraph";
    solnStr = translateToLatin(str);
    assert(strcmp(solnStr, "aragraphpay") == 0);
    free(solnStr);

    str = "eight";
    solnStr = translateToLatin(str);
    assert(strcmp(solnStr, "eightway") == 0);
    free(solnStr);
}

int main(void) {
    test(); // runs self-test implementation of the program
    return 0;
}