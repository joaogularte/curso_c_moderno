#include <stdio.h>
#include <stdlib.h>

void error (char mgs[]) {
  fprintf(stderr, "%s\n", mgs);
  exit(1);
}

int main (int argc, char *argv[]) {
  FILE *fh;

  if (argc != 2){
    error("ERRO");
  }

  return 0;
}
