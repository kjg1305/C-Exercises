//Crea un programa que determine si un número entero ingresado es par o impar.

#include <stdio.h> // Incluye la biblioteca estándar de entrada y salida

int main() { // Función principal
    int num;
    printf (" ingresa un numero : ");
    scanf("%d", &num);

    if ( num % 2 == 0){
        printf(" el numero %d  es par ",num);
    }else {
        printf(" el numero %d  es impar ",num);
    }
    return 0;
}

