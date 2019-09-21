#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <inttypes.h>

#include "header_dos.h"

typedef struct {
	IMAGE_DOS_HEADER *header_dos;
} PE_FORMAT;

typedef struct {
  char *filepath;
  PE_FORMAT pe_format;
} PEFILE;

bool petest_init(PEFILE *pe);
bool petest_ispe(PEFILE *pe);
void petest_deinit(PEFILE *pe);