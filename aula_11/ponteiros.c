#include <stdio.h>


// Ponteiro é simplismente um endereço
// E tudo que da para fazer com um array da para fazer com um ponteiro
void imprimi(char *s){
  printf("%p\n", s);
  while (*s) {
    printf("%c", *s);
    s++;
  }
  printf("\n");
}

void imprimir2(char s[]){
  unsigned i = 0;
  while (s[i]) {
    printf("%c", s[i]);
    i++;
  }
}

int main(void){
  /*
   *Maneiras de declarar strings em c:
   * char string[] = "texto"
   * out
   * char *string = "texto"
   */
  char nome[] = "joaoaaaaaaaaaaaaaaaaaaaaaaaa";
  char *n = "joaoaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
  char nm[] = { 0x6a, 0x6f, 0x61, 0x6f, 0x00 };
 
  printf("%p\n", nome);
  imprimi(nome);
  imprimir2(nome);


  ///////////////////
 
  
  
  
  return 0;
}
