#include <stdio.h>
#include <ctype.h>

// Función para el Bonus (d): Volcado de memoria estilo hexdump
void hex_dump(const void *addr, size_t n) {
    const unsigned char *p = (const unsigned char *)addr;
    
    for (size_t i = 0; i < n; i += 8) {
        // 1. Mostrar dirección de inicio del bloque
        printf("%p  ", (void *)(p + i));
        
        // 2. Mostrar los bytes en hexadecimal (agrupados de a 8)
        for (size_t j = 0; j < 8; j++) {
            if (i + j < n) {
                printf("%02x ", p[i + j]);
            } else {
                printf("   "); // Espaciado si la última línea no llega a 8 bytes
            }
        }
        
        printf(" |");
        
        // 3. Mostrar caracteres imprimibles (. para no imprimibles)
        for (size_t j = 0; j < 8; j++) {
            if (i + j < n) {
                unsigned char c = p[i + j];
                printf("%c", isprint(c) ? c : '.');
            }
        }
        printf("|\n");
    }
}

int main(void) {
    // --- Parte a) Declaración del arreglo de enteros ---
    int v[5] = {1, 2, 3, 4, 5};

    printf("=== PARTE A & B: Arreglo de Enteros ===\n");
    for (int i = 0; i < 5; i++) {
        // ii y iii) Índice, valor decimal/hexadecimal y dirección de memoria
        printf("v[%d] = %d (0x%08x) @ %p\n", i, v[i], v[i], (void *)&v[i]);
        
        // iv) Inspección byte a byte usando puntero unsigned char *
        unsigned char *p = (unsigned char *)&v[i];
        printf("    bytes: ");
        for (size_t j = 0; j < sizeof(int); j++) {
            printf("%02x ", p[j]);
        }
        printf("\n");
    }

    printf("\n=== PARTE C: Variable Double ===\n");
    // --- Parte c) Variable double d = 3.14 ---
    double d = 3.14;
    printf("double d = %.2f @ %p\n", d, (void *)&d);
    
    unsigned char *p_double = (unsigned char *)&d;
    printf("    bytes: ");
    for (size_t j = 0; j < sizeof(double); j++) {
        printf("%02x ", p_double[j]);
    }
    printf("\n");

    printf("\n=== PARTE D (BONUS): Hexdump de los datos ===\n");
    // Demostración del hexdump imprimiendo todo el arreglo v
    printf("Hexdump del arreglo v (20 bytes):\n");
    hex_dump(v, sizeof(v));

    return 0;
}