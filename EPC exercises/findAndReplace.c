/**
 * @brief Seaches and replaces a string with another in a given strin
 * @details
 * Problem Statement
 * Perform a search and replace on the sentence using the arguments provided and return the new sentence.
 * First argument is the sentence to perform the search and replace on.
 * Second argument is the word that you will be replacing (before).
 * Third argument is what you will be replacing the second argument with (after).
 * 
 * For simplicity this solutions takes into condideration only 
 * the case where the search and replace strings are of equal length
 */

#include <assert.h>
#include <stdlib.h>
#include <string.h>

char *searchAndReplace(const char *str, char *search, const char *replace){
    int len_replace = strlen(replace);
    int len_search = strlen(search);
    int len_str = strlen(str);
    char *new_str = (char *) malloc(len_str + 1);
    *new_str = '\0';    //empty string
    char *new_str_ptr = new_str;

    while (*(str + len_search - 1)){
        if (strncmp(str, search, len_search) == 0){
            strcat(new_str, replace);
            str += len_replace;
            new_str += len_replace;
            continue;
        }
        strncat(new_str++, str++, 1);
    }
    strcat(new_str, str);
    return new_str_ptr;
}

void test(void){

    char *soln_str = searchAndReplace("Hello I am Edwin", "Edwin", "Ajong");
    assert(strcmp(soln_str, "Hello I am Ajong") == 0);
    free(soln_str);
}

int main(void){
    test();
    return 0;
}