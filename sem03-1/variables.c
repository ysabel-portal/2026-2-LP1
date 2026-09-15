#include<stdio.h>
#include<string.h>
int main(){

    int a=25;
    float b=7.5;
    double c=6.022e23;

    char d='A';
    char *nombre="UNI";
    printf("a=%d tiene %d bytes \n ",a,sizeof(a));
     printf("b=%f tiene %d bytes \n ",b,sizeof(b)); 
     printf("c=%lf tiene %d bytes \n ",c,sizeof(c));
      printf("d=%c tiene %d bytes \n ",d,sizeof(d));
      printf("*nombre=%s tiene %d bytes  y tiene %d caracteres \n ",nombre,sizeof(nombre),strlen(nombre));


    return 0;
}