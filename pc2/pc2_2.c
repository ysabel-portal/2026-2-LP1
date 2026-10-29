
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *concatenar(const char *a, const char *b) {
    size_t lenA=strlen(a);
    size_t lenB=strlen(b) ;
    if (a == NULL || b == NULL) {
        return NULL;
    }
    char *resultado = (char *)malloc(lenA + lenB+ 1);
    if(resultado == NULL) {
        return NULL;
    }
    strcpy(resultado, a);
    strcpy(resultado + lenA, b);

    return resultado;
}
char *concatenar_n(const char *a, const char *b, size_t n) {
    if (a == NULL || b == NULL) {
        return NULL;
    }
    size_t lenA = strlen(a);
    size_t lenB = strlen(b);
    size_t efectivos = (n < lenB) ? n : lenB;
    char *resultado = (char *)malloc(lenA + efectivos + 1);
    if (resultado == NULL) {
        return NULL;
    }
    strcpy(resultado, a);
    for (size_t i = 0; i < efectivos; i++) {
        resultado[lenA + i] = b[i];
    }
    resultado[lenA + efectivos] = '\0';
    return resultado;
}
int main() {
    char a[100];
    char b[100];
    size_t n;

    printf("Ingrese la primera cadena: ");
    fgets(a, sizeof(a), stdin);
    printf("Ingrese la segunda cadena: ");
    fgets(b, sizeof(b), stdin);
    
    a[strcspn(a, "\n")] = '\0';
    b[strcspn(b, "\n")] = '\0';
    char *resultado = concatenar(a, b);
    if (resultado != NULL) {
        printf("\nConcatenacion completa: %s\n", resultado);
        free(resultado);
    } else {
        printf("\nError en concatenar()\n");
    }
    printf("\nIngrese n para concatenar_n: ");
    scanf("%zu", &n);

    resultado = concatenar_n(a, b, n);

    if (resultado != NULL) {
        printf("Concatenacion_n: %s\n", resultado);
        free(resultado);
    } else {
        printf("Error en concatenar_n()\n");
    }

    return 0;
}

