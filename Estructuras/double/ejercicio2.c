//3. Realiza un programa que calcule el promedio de 5 números ingresados por el usuario.
#include <stdio.h> // Incluye la biblioteca estándar de entrada y salida

int main() { 

    double num1 , num2, num3, num4,num5  ;
    printf ( "ingresa un 5 numeros  :");
    scanf("%lf %lf %lf %lf %lf", &num1, &num2, &num3, &num4, &num5);

    
    double suma = num1+num2+num3+num4+num5;
    double promedio = suma /5 ;
    printf("La suma de %.10f + %.10f + %.10f + %.10f + %.10f es %.10f\n", num1,num2,num3,num4,num5, suma); 
    printf("y el promedio de la suma es : %.10f\n",promedio);
    return 0; 
}
