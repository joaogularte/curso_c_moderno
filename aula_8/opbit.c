#include <stdio.h>


int main(void){
  /*
   * &
   * |
   * ^ xor - compara os bits
   * ~ -  nega todos os bits
   * << shift left - adiciona bits 0 deslocando para a esquerda
   * >> shit right - adiciona bits 0 ou 1 deslocando para a direita(add 1 se começar com 1 e add 0 se começar com 0 )
   */

  // int a = 2; //10
  // int b = 3; //11

  // int i = 0b00000000000000000000000000000000;
  // int x = 0b01111111111111111111111111111111;
  // extensao 0b

  int a = 0b1000;

  printf("O resultdo eh: %d\n", a>>1);
  
  //printf("O resultado eh: %d\n", ~x);
  
  return 0;
}
