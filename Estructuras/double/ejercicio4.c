//5. Haz un programa que calcule la potencia de un número (base y exponente double).
#include <stdio.h> // Incluye la biblioteca estándar de entrada y salida
#include <math.h>
int main() { 
    double num1 , base ;
    printf("Ingresa la base :\n");
    scanf("%lf", &num1);
    printf("Ingresa l el exponente:\n");
    scanf("%lf", &base);
    double potencia = pow(num1,base) ;

    printf(" la pontencia de numero %.10f es %.10f\n",num1 , potencia);

    return 0;
}

