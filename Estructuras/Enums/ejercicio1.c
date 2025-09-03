//2. Crea un programa que use un enum para representar los meses del año y muestre el mes correspondiente a un número.
#include <stdio.h> // Incluye la biblioteca estándar de entrada y salida

enum Meses {ENERO, FEBRERO, MARZO, ABRIL, MAYO, JUNIO, JULIO, AGOSTO, SEPTIEMBRE, OCTUBRE, NOVIEMBRE, DICIEMBRE}; // Define un enum para los meses

int main() {
    enum Meses hoy = SEPTIEMBRE; // Declara una variable enum y la inicializa
    char *nombresMeses[] = { "Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio", "Julio", "Agosto", "Septiembre", "Octubre", "Noviembre", "Diciembre" }; 
    
    printf("El mes es: %s\n", nombresMeses[hoy]); // Imprime el nombre del mes correspondiente al valor de hoy
    
    return 0; 
}
