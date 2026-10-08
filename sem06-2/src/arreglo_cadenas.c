#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_BUFFER 256

int main(void) {
    int n = 0;
    do {
        printf("Cuantas cadenas: ");
        if (scanf("%d", &n) != 1) {
            
            while (getchar() != '\n');
            continue;
        }
    } while (n < 1 || n > 10);

    getchar();

    char **lineas = (char **)malloc(n * sizeof(char *));
    if (lineas == NULL) {
        fprintf(stderr, "Error al reservar memoria para el arreglo de punteros\n");
        return 1;
    }

    char buffer[MAX_BUFFER];


    for (int i = 0; i < n; i++) {
        printf("Cadena %d: ", i + 1);
        if (fgets(buffer, sizeof(buffer), stdin) != NULL) {
            
            buffer[strcspn(buffer, "\n")] = '\0';

            
            lineas[i] = strdup(buffer);
            if (lineas[i] == NULL) {
                fprintf(stderr, "Error al reservar memoria para la cadena %d\n", i + 1);
                return 1;
            }
        }
    }

    printf("\n");

    for (int i = 0; i < n; i++) {
        printf("lineas[%d] @ %p -> \"%s\" (len=%zu)\n", 
               i, (void *)lineas[i], lineas[i], strlen(lineas[i]));
    }


    for (int i = 0; i < n; i++) {
        free(lineas[i]);
    }
    free(lineas);

    return 0;
}