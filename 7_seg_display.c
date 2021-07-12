/*Date : 12-07-2021
    by eddybruv
    */
//Program converts any number from 0 - 9 into 7 seg display


#include<stdio.h>
#include<stdbool.h>

int num,i,j;
bool A,B,C,D;
bool a,b,c,d,e,f,g;

int main(void){
    printf("Enter a decimal number from 0-9: ");
    scanf("%d",&num);

    if(num < 0 || num > 9){
        printf("Sorry, the number you entered is not in range.\nRerun the program and follow instructions\n");
        return 1;
    }

    //This block of code converts the number into a 4 bit binary number,
    //stored in A B C and D

    A = num & 0b1000;
    B = num & 0b0100;
    C = num & 0b0010;
    D = num & 0b0001;
    

    printf("Binary equivalent is : %d%d%d%d\n",A,B,C,D);

    //BLOCK of code contains the logic of the display
    a = C + A + (B & D) + (!B & !D);
    b = A + (!A & !B) + (!C & !D) + (C & D);
    c = A + B + D + !C;
    d = A + (C & !D) + (!B & C) + (!B & !D) + (!C & B & D);
    e = (A & B) + (C & !D) + (A & C) + (!B & !D);
    f = A + (!C & !D) + (!C & B) + (B & !D);
    g = A + (C & !B) + (C & !D) + (B & !C);

    int dis[9][5] = {
        0,a,a,a,0,
        f,0,0,0,b,
        f,0,0,0,b,
        f,0,0,0,b,
        0,g,g,g,0,
        e,0,0,0,c,
        e,0,0,0,c,
        e,0,0,0,c,
        0,d,d,d,0,
    };

    //output equivalence of the input according to truth table.
    printf("Output: %d%d%d%d%d%d%d\n",a,b,c,d,e,f,g);

    for(i = 0; i < 9 ;i++){
        for (j = 0;j < 5; j++){
            if(dis[i][j] == 0){
                printf("  ");
            }
            else printf("# ");
        }
        printf("\n");
    }

    return 0;
}