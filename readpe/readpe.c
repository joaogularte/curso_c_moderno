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

void ispe(const unsigned char *file){
  if (file[0] != 'M' || file[1] != 'Z'){
    error("O formato deste arquivo não é PE");
  }
}

int main (int argc, char *argv[]) {
  FILE *fh;
  unsigned char content_file[32];
  if (argc != 2) {
    usage();
  }
  
  fh = fopen(argv[1], "rb");

  if (fh == NULL) {
    error("Arquivo nao encontrado ou sem premissão de leitura");
  } 
  
  if (fread(content_file, 32, 1, fh) != 1){
    error("Não consegui ler os 32 bytes do arquivo");
  }
  
  ispe(content_file);

  printf("%c\n", content_file[0]);
  return 0;
}
