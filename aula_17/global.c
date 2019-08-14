#include <stdio.h>

int i;
void function (void) {
  for (i=0; i < 3; i++)
    printf("%d\n", i);
}

int main (int argc, char *argv[]) {
  function();
  i++;
  return 0;
}


