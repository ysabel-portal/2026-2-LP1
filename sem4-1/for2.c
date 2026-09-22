#include<stdio.h>//primeros 25 multiplos de 
int main(){
int hasta=25;
int desde=1;
for(;;){//for infinito//bucle lazo loop infinito
    if(desde>hasta)
    break;
    if(desde%3==0){
        printf("%d \n",desde);
    }
}


return 0;

}