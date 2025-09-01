#include <stdio.h>
#include <string.h>

int main() {
   char palabra[50];
   char letra;
   int contador = 0;

   printf("ingresa una palabra: ");
   scanf("%s", palabra);

   printf("ingresa una letra a contar: ");
   scanf(" %c", &letra);  // Nota el espacio antes de %c

   for (int i = 0; i < strlen(palabra); i++) {
       if (palabra[i] == letra) {
           contador++;
       }
   }

   printf("La letra '%c' aparece %d veces.\n", letra, contador);
   return 0;
}
