#include <stdio.h>
void main(){

  printf("==ANTES==\n");
    //tipodedado identificador;
    int hora=7;
    printf("_hora\n");
    printf("valor: %d\n",hora);
    printf("endereço: %u\n",&hora);
 
    int* h;
    printf("_*h\n");
    printf("valor: %u\n",h);
    printf("endereço: %u\n",&h);
  printf("=========\n\n");

  h = &hora;

  printf("==DEPOIS==\n");
    printf("_hora\n");
    printf("valor: %d\n",hora);
    printf("endereço: %u (%p)\n",&hora, &hora);
    printf("_*h\n");
    printf("valor: %u\n",h);
    printf("endereço: %u\n",&h);
  printf("=========\n\n");

}
