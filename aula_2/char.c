#include <stdio.h>

int main(void){
  char c;
  int i;
  i = 'A';
  printf("%c\n", i);
  printf("O tamanho c eh: %lu em bytes / %lu em bits \n", sizeof c, sizeof c * 8);
  c = 128;
  printf("O valor de c: %i\n", c);
  return 0;
}
