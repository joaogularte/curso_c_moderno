#include "petest.h"

bool petest_init(PEFILE *pe){
  FILE *f = fopen(pe->filepath, "rb");
  if(!f){
    return false;
  }
  pe->header_dos = malloc(sizeof(IMAGE_DOS_HEADER));
  if(!pe->header_dos){
    return false;
  }
  
  fread(pe->header_dos, sizeof(IMAGE_DOS_HEADER), 1, f);
  
  fclose(f);
  return true;
}

bool petest_ispe(PEFILE *pe){
  return (pe->header_dos->e_magic == 0x5a4d);
}

