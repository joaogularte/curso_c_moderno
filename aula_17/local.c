#include <stdio.h>

void function (void) {
  int i;
  for (i=0; i < 3; i++)
    printf("%d\n", i);
}

int main (int argc, char *argv[]) {
  function();
  return 0;
}


