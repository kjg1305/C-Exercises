
int main() { // Función principal
   char c ;
   printf ( "ingresa una letra minuscula :");
   scanf ("%c",&c);

   if (c>='a' && c<= 'z'){
    char mayus = c - 32 ;
    printf("la version mayuscula es : %c\n",mayus);

   }else {
    printf("No ingresaste una minuscula. \n");
   }
   return 0;
}
