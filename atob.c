#include<stdio.h>   
#include<stdlib.h>    
int main(){
   
    int a,b,c;
    FILE *f = fopen("a.txt","r");
    char x[10];
    char y[10];
   fscanf(f,"%s %s",x,y);
   a =atoi(x);
   b =atoi(y);
   c=a+b;
    FILE *fa = fopen("b.txt","w");
    fprintf(fa,"%d",c);
    fclose(fa);
    return 0;
}