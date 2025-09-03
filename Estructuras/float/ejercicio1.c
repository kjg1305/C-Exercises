//2. Crea un programa que convierta grados Celsius a Fahrenheit.
#include <stdio.h> 

int main() { // Función principal
    float celsius ;
    printf("Introduce la temperatura en grados Celsius: ");
    scanf("%f", &celsius);
    float conversion = (celsius * 9 / 5) + 32;
    printf("%.2f grados Celsius son igual a %.2f grados Fahrenheit.\n", celsius,conversion );
    return  0;
}
