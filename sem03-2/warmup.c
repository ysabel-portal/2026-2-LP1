#include <stdio.h>
int main(void) {
 printf("C version: %ld\n", __STDC_VERSION__);//definicion  que se encuentra en una libreria(stdio.h o llama a otra libreria)
 //
 printf("int: %zu bytes | long: %zu bytes | float: %zu | double: %zu\n",//representa el tamaño de cualquier objeto en bytes(size_t es siempre un numero sin signo)
 sizeof(int), sizeof(long), sizeof(float), sizeof(double));//no se ven las variables es ven los tipos de datos 
 return 0;
}



//formatos de salid, printf en c 