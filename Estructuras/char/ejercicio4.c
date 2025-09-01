int main(){
    char c ;
    printf(" ingresa un caracter :");
    scanf("%c", &c);

    if (c>= '0' && c<= '9'){
        printf(" es un digito numerico.\n");

    }else {
        printf(" no es una digto.\n");

    }
    return 0 ; 
}