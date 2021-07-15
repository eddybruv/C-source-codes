/* Date : 15-07-2021
    by eddybruv
*/

#include<stdio.h>
#include<string.h>

int main(void){
    int matrix1[3][3];
    int matrix2[3][3];
    int trace1 = 0;
    int trace2 = 0;
    int i = 0,j = 0;
    int add[3][3];
    int transpose1[3][3];
    int transpose2[3][3];

    printf("Enter elements for mattrix one: ");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3;j++){
            scanf("%d", &matrix1[i][j]);
        }
    }       

    printf("\nEnter elements for mattrix two: ");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3;j++){
            scanf("%d", &matrix2[i][j]);
        }
    }

    printf("\nMatrix1: \n");
    for(i = 0; i < 3; i ++){
        for(j = 0;j < 3;j++){
            printf("%d ", matrix1[i][j]);
        }
        printf("\n");
    }

    printf("\nMatrix2: \n");
    for(i = 0; i < 3; i ++){
        for(j = 0;j < 3;j++){
            printf("%d ", matrix2[i][j]);
        }
        printf("\n");
    }

    for(i = 0; i < 3;i++){
        for(j = 0; j < 3;j++){
            if(i = j){
            trace1 = trace1 + matrix1[i][j];
            trace2 = trace2 + matrix2[i][j];
            }
        }
    }
    printf("\nTrace1 = %d\n",trace1);
    printf("\nTrace2 = %d\n", trace2);

    for(i = 0;i < 3;i++){
        for(j = 0; j < 3;j++){
            add[i][j] = matrix1[i][j] + matrix2[i][j]; 
        }
    }    

    printf("\nAdding the both matrices, we get: \n");
    for(i = 0; i < 3; i ++){
        for(j = 0;j < 3;j++){
            printf("%d ", add[i][j]);
        }
        printf("\n");
    }

    for(i = 0;i < 3;i++){
        for(j = 0; j < 3;j++){
            transpose1[i][j] = matrix1[j][i];
            transpose2[i][j] = matrix2[j][i]; 
        }
    } 

    printf("\nTransppose of matrix 1 is: \n");

    for(i = 0; i < 3; i ++){
        for(j = 0;j < 3;j++){
            printf("%d ", transpose1[i][j]);
        }
        printf("\n");
    }

    printf("\nTranspose of matrix 2 is: \n");
    for(i = 0; i < 3; i ++){
        for(j = 0;j < 3;j++){
            printf("%d ", transpose2[i][j]);
        }
        printf("\n");
    }


    return 0;
}