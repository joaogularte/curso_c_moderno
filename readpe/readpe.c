#include <stdio.h>
#include <stdlib.h>
#include "lib/petest.h"

void error (char *mgs) {
  fprintf(stderr, "Error: %s\n", mgs);
  exit(1);
}

void usage () {
  printf("Uso:\n\treadpe <arquivo.exe>\n");
  exit(1);
}


int main (int argc, char *argv[]) {
  
  PEFILE pe;  
    
  if (argc != 2) {
    usage();
  }
  
  pe.filepath = argv[1]; 
  puts(pe.filepath);
  
  petest_init(&pe);
  printf("%x\n", pe.header_dos->e_lfanew);
  printf("%zu\n", sizeof(IMAGE_DOS_HEADER));
  return 0;
}
