#include <stdio.h>
int ackermann(int m,int n){
    int static contador=0;
    contador++;
    printf("llamada %d\n",contador);
    int resultado;
    if(m==0){
        resultado=n+1;
     
    }
    if(m>0 && n==0){
        resultado=ackermann( m-1, 1);
    }
   
   if(m>0 && n>0){
    resultado=ackermann((m-1),ackermann(m,n-1));
   }
   return resultado;
}
int main(){
    int a=ackermann(3,4);
    printf("%d",a);
  
    return 0;
}
