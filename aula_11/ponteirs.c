#include <stdio.h>

/**
 *Lembrando
 *int *b = isto declara um ponteiro, o * serve para diferenciar das demais declarações das variaveis 
 * *b = isto busca o conteudo do endereco de memoria que o ponteiro esta apontando
 * b = isto referncia o endereco da variavel que o ponteiro aponta (0xffffff no caso)
 */


void imprimir(char *s){
  while(*s){
    printf("%c", *s);
    s++;
  }
  printf("\n");
}

int main (int argc, char *argv[]) {
  
  char *sp = "texto";
  char s[] = "textotextotexto";
  char sa[6] = { 't', 'e', 'x', 't', 'o', '\0' };
  imprimir(sa);
  sp++;
  printf("%c\n", *sp); 
  int a[] = {458, 784, 122};
  int tamanho = sizeof a / sizeof a[0];

  for(int i = 0; i < tamanho; i++)
    printf("O endereco em memoria de a eh: %d\n", *(a+i));
  
  return 0;
} 
