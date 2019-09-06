#include "petest.h"

bool petest_ispe(const unsigned char *file){
  return (file[0] != 'M' || file[1] != 'Z');
}

