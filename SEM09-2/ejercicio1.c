//puntero que cambia la direccion 
#include <stdio.h>
int main(void) {
 int numeros[5] = {10, 20, 30, 40, 50};
 int *ptr = numeros;
 printf("direccion inicial del puntero *ptr es %p \n",ptr);
 for (int i = 0; i < 5; i++) {
 printf("numeros[%d] = %d\n", i, *(ptr+i));
 }
 printf("direccion final del puntero es %p",ptr);
 return 0;
}
