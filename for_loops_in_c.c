/*Date: 18-07-2021
    by eddybruv
    exercise from hackerrank
    */

#include <stdio.h>
#include <stdlib.h>



int main() 
{
    int a, b;
    scanf("%d\n%d", &a, &b);
  	// Complete the code.
    char arr[9][6]={"one","two","three","four","five","six","seven","eight","nine"};
    
   for(int i=a; i<=b; i++){
       if(i>9){
           if(i%2 == 0){
               printf("even\n");
           }else{
               printf("odd\n");
           }
       }else{
           printf("%s\n",arr[i-1]);
       }
       
   }


    return 0;
}