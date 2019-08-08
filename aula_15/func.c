#include <stdio.h>
#include <stdlib.h>

void error(char *erro){
  fprintf( stderr,"Erro: %s\n", erro);
  exit(1);
}

void tchau (void) {
  printf("tchau\n");
  exit(0);
}

int soma (int n1, int n2, int n3) {
  return n1 + n2 + n3;
}

int main (int argc, char *argv[]) {
  int num1, num2, num3;
  scanf("%d", &num1);
  
  if (num1 < 1 ) 
    error("Numero deve ser positivo!");
  
  if (num1 < 1900)
     error("Voce eh muito velho!");


  printf("Seu ano de nascimento é: %d\n", num1);
  //printf("%d\n", soma(num1, num2, num3));
  printf("O endereço de soma eh: %p\n", soma);
  return 0;
}


