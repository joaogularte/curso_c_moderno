#include <stdio.h>
#include "f.h"

//todas as macros são resolvidas em tempo de compilação

#define MSG "Mensagem Padrao"
#define QUAD(x) (x*x)
#define MAX(x,y) \
  (x > y ? x : y)
#define DEBUG 1
#undef DEBUG

#define VAR(x) printf("A variavel tem o nome de "#x"\n");

int main (int argc, char *argv[]) {
  
  int numero = 4;
  printf("O quadrado de %d eh: %id\n", 9, QUAD(9));
  printf("%d\n", MAX(12, 34));
  printf("%d\n", __LINE__);
  
#ifdef DEBUG
  printf("Estou na linha %d\n", __LINE__);  
#endif
  
  printf("%s\n", __DATE__);
  printf("%s\n", __TIME__);
  VAR(numero);
  return 0;
}
