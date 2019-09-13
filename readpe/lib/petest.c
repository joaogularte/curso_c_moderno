#include "petest.h"

bool petest_init(PEFILE *pe){
  FILE *f = fopen(pe->filepath, "rb");
  if(!f){
    return false;
  }
  pe->hdr_dos = malloc(sizeof(IMAGE_DOS_HEADER));
  if(!pe->hdr_dos){
    return false;
  }
  
  fread(pe->hdr_dos, sizeof(IMAGE_DOS_HEADER), 1, f);

  fclose(f);
  return true;
}

bool petest_ispe(const unsigned char *file){
  return (file[0] != 'M' || file[1] != 'Z');
}

