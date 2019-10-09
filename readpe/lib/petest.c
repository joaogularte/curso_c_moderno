#include "petest.h"

bool petest_init(PEFILE *pe){

  //Open de file
  FILE *f = fopen(pe->filepath, "rb");
  if(!f){
    return false;
  }
  
  //alloc memory to header_dos
  pe->pe_format.header_dos = malloc(sizeof(IMAGE_DOS_HEADER));
  if(!pe->pe_format.header_dos){
    return false;
  }
  
  //read to header_dos
  fread(pe->pe_format.header_dos, sizeof(IMAGE_DOS_HEADER), 1, f);
  
  //set the position of stream
  fseek(f, pe->pe_format.header_dos->e_lfanew, SEEK_SET);
  
  //read to signature field
  fread(&(pe->pe_format.signature), sizeof(pe->pe_format.signature), 1, f);
  
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