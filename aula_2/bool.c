#include <stdio.h>
#include <stdbool.h>

int main(void){
  bool b;
  printf("Tamanho de b: %lu\n", sizeof b);
  b = true; 
  printf("O valorde b eh: %i\n", b);
  return 0;
}
