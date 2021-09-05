#include<stdio.h>   

int main(){
    printf("Input data string : ");
char x ='.';
char y;
int i=0;
FILE *fa = fopen("data.txt","w");
while(y!=x)
{
char str[1000000];
scanf("%s",str);
fprintf(fa,"%s\n",str);
y=str[i];
}
fclose(fa);
    return 0;
}