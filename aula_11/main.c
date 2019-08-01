#include <stdio.h>
#include <stdlib.h>

// char *variavel[] é a mesma coisa que char **variavel
//
//

int main(int argc, char **argv, char **envp){
  int i = 0;
  
  char *s = "linha 1";  //Ponteiro simples
  
  // char **s = { "oia", "oia2", "oia2" } Ponteiro para ponteiro para char - Um ponteiro que aponta para varios enderecos
  char *ss[] = { "linha1", "linha2", "linha3" };  //Array de Ponteiro para char
  
  int *p;
  p = &i;

  printf("O endereco de i: %p\n", &i);
  printf("O endereco de p: %p e o tamanho de p %zu\n", &p, sizeof p);
  printf("O conteudo de p: %p\n", p);
  printf("*p: %d\n", *p);

  int *j;
  j = malloc(sizeof(int));
  printf("endereco que j aponta: %p\n", j);
  free(j);

  printf("%p\n", &ss[0]);
  printf("%p\n", ++ss[0]);

  return 0;
}
