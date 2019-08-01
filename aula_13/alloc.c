#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void *malloc_s (size_t size) {
  void *p;
  p = malloc(size);
  if(p == NULL){
    exit(1);
  }
  return p;    //Retorna um endereco de memoria(ponteiro) já alocado;
}

int main (int argc, char *argv[]) {
  int *p;
  int i;
  p = malloc_s(sizeof(int));
  printf("%p\n", p);
  printf("%p\n", &i);
  printf("%zu\n", sizeof(void));
  free(p);
  return 0;
}
