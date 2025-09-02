//4. Escribe un programa que determine si un número double es positivo, negativo o cero.
#include <stdio.h> // Incluye la biblioteca estándar de entrada y salida

int main() { 
    double num1;
    printf("Ingresa un numero:\n");
    scanf("%lf", &num1);

    if (num1 > 0) {
        printf("El numero %.10f es positivo\n", num1);
    } else if (num1 < 0) {
        printf("El numero %.10f es negativo\n", num1);
    } else {
        printf("El numero %.10f es cero\n", num1);
    }

    return 0;
}

