#include <stdio.h>
#include <stdlib.h>

void error (char *mgs) {
  fprintf(stderr, "Error: %s\n", mgs);
  exit(1);
}

void usage () {
  printf("Uso:\n\treadpe <arquivo.exe>\n");
  exit(1);
}

int main (int argc, char *argv[]) {
  FILE *fh;

  if (argc != 2) {
    usage();
  }
  
  fh = fopen(argv[1], "rb");

  if (fh == NULL) {
    error("Arquivo nao encontrado ou sem premissão de leitura");
  } 

  return 0;
}
