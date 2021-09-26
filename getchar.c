#include<stdio.h>

int main(){
    int c;
    int nl=0,nw=0,nc=0;
    while((c = getchar()) != EOF){
         ++nc;
         if(c == '\n')
            ++nl;
        if(c == ' ' || c == '\n' || c == '\t')
            ++nw;
    printf("%d  %d  %d\n ", nl,nw,nc);
}
}