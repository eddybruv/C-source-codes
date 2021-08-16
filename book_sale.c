/*Date: 16-08-2021
    by eddybruv
    */

#include <stdio.h>
#include <stdlib.h>

float price = 0;

void display_options(void);
void choice(void);
void calculations(int, int, int, int, int);

int main(void){
    run();
}

void run(void){
    display_options();
}
void display_options(void){
    printf("Hello,\n   Welcome to the book store. Below are the available books.\n");
    printf("\n===================================================================\n\n");
    printf("1. Harry Potter and the Sorcerer's Stone\n");
    printf("2. Harry Potter and the Chamber Of Secrets\n");
    printf("3. Harry Potter and the Prisoner of Azkaban\n");
    printf("4. Harry Potter and the Goblet of Fire\n");
    printf("5. Harry Potter and the Order of the phoenix\n");
    printf("\n0. To Exit program!");
    printf("\n\n===================================================================\n");
    choice();
}

void choice(void){
    int choice = 1;
    int book_1 = 0, book_2 = 0, book_3 = 0, book_4 = 0, book_5 = 0;
    printf("Enter choice of books: ");
    while (choice > 0){
        scanf("%d", &choice);
        if(choice == 1)
            book_1++;
        if (choice == 2)
            book_2++;
        if (choice == 3)
            book_3++;
        if (choice == 4)
            book_4++;
        if (choice == 5)
            book_5++;
        
        if(choice > 5 || choice < 0)
            exit(1);
    }
    calculations(book_1, book_2, book_3, book_4, book_5);
}

void calculations(int book_1, int book_2, int book_3, int book_4, int book_5){
    while (book_1 > 0 || book_2 > 0 || book_3 > 0 || book_4 > 0 || book_5 > 0){
        if(book_1 && book_2 && book_3 && book_4 && book_5){
            price += 30.0f;
            book_1--;
            book_2--;
            book_3--;
            book_4--;
            book_5--;
        }

        else if(book_1 && book_2 && book_3 && book_4){
            while (book_1 > 0 || book_2 > 0 || book_3 > 0 || book_4 > 0){
                price += 25.6f;
                book_1--;
                book_2--;
                book_3--;
                book_4--;
            }
        }
        else if(book_1 && book_2 && book_3 && book_5){
            while (book_1 > 0 || book_2 > 0 || book_3 > 0 || book_5 > 0){
                price += 25.6f;
                book_1--;
                book_2--;
                book_3--;
                book_5--;
            }
        }
        else if(book_1 && book_2 && book_4 && book_5){
            while (book_1 > 0 || book_2 > 0 || book_3 > 0 || book_4 > 0){
                price += 25.6f;
                book_1--;
                book_2--;
                book_4--;
                book_5--;
            }
        }
        else if(book_2 && book_3 && book_4 && book_5){
            while (book_2 > 0 || book_3 > 0 || book_4 > 0 || book_5 > 0){
                price += 25.6f;
                book_2--;
                book_3--;
                book_4--;
                book_5--;
            }
        }

        else if(book_1 && book_2 && book_3){
            while (book_1 > 0 && book_2 > 0 && book_3 > 0){
                price += 19.6f;
                book_1--;
                book_2--;
                book_3--;
            }
        }

        else if(book_1 && book_2 && book_4){
            while (book_1 > 0 && book_2 > 0 && book_4 > 0){
                price += 19.6f;
                book_1--;
                book_2--;
                book_4--;
            }
        }

        else if(book_1 && book_2 && book_5){
            while (book_1 > 0 && book_2 > 0 && book_5 > 0){
                price += 19.6f;
                book_1--;
                book_2--;
                book_5--;
            }
        }

        else if(book_1 && book_3 && book_4){
            while (book_1 > 0 && book_3 > 0 && book_4 > 0){
                price += 19.6f;
                book_1--;
                book_4--;
                book_3--;
            }
        }

        else if(book_1 && book_3 && book_5){
            while (book_1 > 0 && book_3 > 0 && book_5 > 0){
                price += 19.6f;
                book_1--;
                book_5--;
                book_3--;
            }
        }

        else if(book_1 && book_4 && book_5){
            while (book_1 > 0 && book_4 > 0 && book_5 > 0){
                price += 19.6f;
                book_1--;
                book_4--;
                book_5--;
            }
        }

        else if(book_2 && book_3 && book_4){
            while (book_2 > 0 && book_3 > 0 && book_4 > 0){
                price += 19.6f;
                book_2--;
                book_3--;
                book_4--;
            }
        }

        else if(book_2 && book_3 && book_5){
            while (book_2 > 0 && book_3 > 0 && book_5 > 0){
                price += 19.6f;
                book_2--;
                book_3--;
                book_5--;
            }
        }

        else if(book_2 && book_4 && book_5){
            while (book_2 > 0 && book_4 > 0 && book_5 > 0){
                price += 19.6f;
                book_2--;
                book_4--;
                book_5--;
            }
        }
        
        else if(book_3 && book_4 && book_5){
            while (book_5 > 0 && book_3 > 0 && book_4 > 0){
                price += 19.6f;
                book_5--;
                book_3--;
                book_4--;
            }
        }

        else if(book_1 && book_2){
            while(book_1 > 0 && book_2 > 0){
                price += 15.2f;
                book_1--;
                book_2--;
            }
        }

        else if(book_1 && book_3){
            while(book_1 > 0 && book_3 > 0){
                price += 15.2f;
                book_1--;
                book_3--;
            }
        }

        else if(book_1 && book_4){
            while(book_1 > 0 && book_4 > 0){
                price += 15.2f;
                book_1--;
                book_4--;
            }
        }

        else if(book_1 && book_5){
            while(book_1 > 0 && book_5 > 0){
                price += 15.2f;
                book_1--;
                book_5--;
            }
        }

        else if(book_3 && book_2){
            while(book_3 > 0 && book_2 > 0){
                price += 15.2f;
                book_3--;
                book_2--;
            }
        }

        else if(book_4 && book_2){
            while(book_4 > 0 && book_2 > 0){
                price += 15.2f;
                book_4--;
                book_2--;
            }
        }

        else if(book_5 && book_2){
            while(book_5 > 0 && book_2 > 0){
                price += 15.2f;
                book_5--;
                book_2--;
            }
        }

        else if(book_3 && book_4){
            while(book_3 > 0 && book_4 > 0){
                price += 15.2f;
                book_3--;
                book_4--;
            }
        }

        else if(book_3 && book_5){
            while(book_3 > 0 && book_5 > 0){
                price += 15.2f;
                book_3--;
                book_5--;
            }
        }

        else if(book_5 && book_4){
            while(book_5 > 0 && book_4 > 0){
                price += 15.2f;
                book_5--;
                book_4--;
            }
        }

        while(book_1 > 0){
            price += 8;
            book_1--;
        }

        while(book_2 > 0){
            price += 8;
            book_2--;
        }

        while(book_3 > 0){
            price += 8;
            book_3--;
        }

        while(book_4 > 0){
            price += 8;
            book_4--;
        }

        while(book_5 > 0){
            price += 8;
            book_5--;
        }
    }
        

    printf("\nTotal price: $%.2f", price);
}
