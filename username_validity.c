/**
 * Date: 09-09-2021
 * by eddybruv
 **/

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>

#define SIZE 20

bool username_check(char *username);

int main(void)
{
    char username[SIZE];
    bool check = false;
    printf("    USERNAME SPECIFICATIONS   ");
    printf("\n===============================\n");
    printf("- The name must start with a small letter.\n");
    printf("- Have a capital letter.\n");
    printf("- Contain atleast 8 characters, including a number and special character.\n");
    printf("\n===============================\n");
    printf("Enter username: ");
    scanf("%s", username);

    while (!check)
    {
        if (username_check(username))
        {
            printf("Username succesfully set.\n");
            check = true;
            return 0;
        }
        else
        {
            printf("Invalid username, try again!\n");
            printf("Enter username: ");
            scanf("%s", username);
        }
        continue;
    }
}

bool username_check(char *username)
{
    int len = strlen(username);
    bool number = false;
    bool special_xter = false;
    bool capital = false;
    char initial = username[0];

    for (int i = 0; i < len; i++)
    {
        if (len < 8)
            return false;
        if (!islower(initial))
            return false;
        if (isdigit(username[i]))
            number = true;
        if (!isalpha(username[i]) && !isdigit(username[i]))
            special_xter = true;
        if (isupper(username[i]))
            capital = true;
    }

    if (number && special_xter && capital)
        return true;

    return false;
}