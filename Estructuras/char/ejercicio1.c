#include <stdio.h> // Incluye la biblioteca estándar de entrada y salida

int main() { // Función principal
    char c;
    printf("ingresa una letra :");
    scanf("%c", &c);

    if (c >= 'A'&& c <= 'Z'){
        c=c+32;

    }

    if ((c>='a' && c<='z')){
        if (c == 'a' || c == 'e' || c == 'i' || c=='o' || c=='u'){
            printf(" ES UNA VOCAL.\n");

        }else {
            printf ( " ES UNA CONSONANTE.\n");
        }
    }else {
        printf("NO ES UNA LETRA VALIDA .\n");
    }
    return 0;
}
