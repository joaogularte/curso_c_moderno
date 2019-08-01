#include <stdio.h>

int main(void){
  
  int a = 359;
  
  if (-1 == a && a < 400){
    int chave = 2;
    printf("Valor de chave %d\n", chave); 
  } else {
    printf("if deu falso!");
  }

  printf("O valor de a: %d\n", a);

  return 0;
}
