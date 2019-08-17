#include <stdio.h>

void function (void) {
  register int i_statico = 0;
  
  for (; i_statico < 8; i_statico++)
    printf("%d\n", i_statico);
}

int main (int argc, char *argv[]) {
  function();
  function();
  function();
  return 0;
}


