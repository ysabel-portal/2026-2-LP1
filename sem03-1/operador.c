#include<stdio.h>
int main(){

    int a=25,b=7,c=129;
    printf("la suma de %d +  %d es%d \n",a,b,a+b);
    printf("la sustraccion de %d -  %d es%d \n",a,b,a-b);
    printf("la multiplicacion de %d *  %d es%d \n",a,b,a*b);
    printf("la division entera de %d entre %d es %d \n",a,b,a/b);
    printf("la divion con tres cifras significativas de (float) %d / %d es %f \n", a,b,(float)a/b);
    printf("el resto(%%) de dividir %d entre %d es %d \n",a,b,a%b);

    printf("--------OPERADORES DE COMPARACION--------\n");
    printf("a= %d \n b=%d \n c=%d \n",a,b,c);
    printf("%d>%d? es %d\n", a,b,a>b);
    printf("%d<%d? es %d\n", a,b,a<b);
    printf("%d>%d y %d>%d es %d\n", a,b,a,c, (a>b)&&(a>c));
    
    printf("%d>%d o %d>%d es %d\n", a,b,b,c, (a>b)||(a>c));


    //goto es para que los codigos puedan migrara a C


}
