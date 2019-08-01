#include <stdio.h>

//array é um ponteiro!
// anotacao a[] eh um atalho para *(a+1)
int main(void){
  unsigned int c[3];
  printf("O tamanho de c eh: %zu bytes \n", sizeof c);
  printf("O numero de elementos de c eh: %zu \n", sizeof c / sizeof c[0]);
 
  c[0] = 'A';
  c[1] = 0x42;
  c[2] = 66;

  char *pc[3];

  printf("O elementos de c0 eh: %d \n",  c[0]);
  printf("O elementos de c1 eh: %d \n",  c[1]);
  printf("O elementos de c2 eh: %d \n",  c[2]);
  
  printf("O endereço  de c eh: %p\n",  c);
  printf("O endereço  de &c eh: %p\n",  &c);
  printf("O endereço  de c0 eh: %p\n",  &c[0]);
  printf("O endereço  de c1 eh: %p\n",  &c[1]);
  printf("O endereço  de c2 eh: %p\n",  &c[2]);

  printf("O tamanho de pc eh: %zu bytes \n", sizeof pc);
  printf("O tamanho de um elemento pc eh: %zu bytes \n", sizeof pc[0]);
  printf("O endereço  de pc0 eh: %p\n",  &pc[0]);
  printf("O endereço  de pc1 eh: %p\n",  &pc[1]);
  printf("O endereço  de pc2 eh: %p\n",  &pc[2]);
  return 0;
}
