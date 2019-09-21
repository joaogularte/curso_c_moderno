#include "petest.h"

bool petest_init(PEFILE *pe){
  FILE *f = fopen(pe->filepath, "rb");
  if(!f){
    return false;
  }
  
  pe->pe_format.header_dos = malloc(sizeof(IMAGE_DOS_HEADER));
  if(!pe->pe_format.header_dos){
    return false;
  }
  
  fread(pe->pe_format.header_dos, sizeof(IMAGE_DOS_HEADER), 1, f);
  
  fclose(f);
  return true;
}

bool petest_ispe(PEFILE *pe){
  return (pe->pe_format.header_dos->e_magic == 0x5a4d);
}

void petest_deinit(PEFILE *pe){
  if(pe->pe_format.header_dos){
    free(pe->pe_format.header_dos);
  }
}