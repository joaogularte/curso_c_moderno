#include <stdio.h>
#include <limits.h>
#include <stdint.h>

int main(void){
  int i = INT_MAX;
  size_t b;

  printf("tamanho de int %zu bytes / %zu bits\n", sizeof i, sizeof i * 8);
  printf("O valor de i: %i\n", i);
  return 0;
}
