#include <stdio.h>
#include <stdlib.h>
int main(void) {
 int n;
 printf("Cantidad de elementos: ");
 if (scanf("%d", &n) != 1 || n <= 0) {//detectar el error en la lectura del valor, ademas n debe se r mayor a c 
 printf("Cantidad invalida.\n");
 return 1;//se sale del sistema 
 }
 int *ptr = malloc((size_t)n * sizeof *ptr);//se reserva espacio para n enteros 
 if (ptr == NULL) {//si no ahy espacio malloc retorna NULL 
 printf("No se pudo reservar memoria.\n");
 return 1;//se termian el programa 
 }
 //si hay espacion se usa el espacio, llenandose con numeros (i+1)*10
 for (int i = 0; i < n; i++) {
 ptr[i] = (i + 1) * 10;
 }
 printf("Elementos del arreglo:\n");
 for (int i = 0; i < n; i++) {
 printf("%d ", *(ptr + i));
 }
 printf("\n");
 free(ptr);
 ptr = NULL;
 return 0;
}