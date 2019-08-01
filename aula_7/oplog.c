#include <stdio.h>

int main(void){
  
  int a = 10;
  int b = 0;

  printf("%d\n", a == b ^ a > 5);
  return 0;
}
