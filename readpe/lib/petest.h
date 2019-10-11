#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <inttypes.h>

#include "dos_header.h"
#include "file_header.h"

#pragma pack(push, 1)
typedef struct {
	IMAGE_DOS_HEADER *header_dos;
	uint32_t signature;
} PE_FORMAT;
#pragma pack(pop)

typedef struct {
  char *filepath;
  PE_FORMAT pe_format;
} PEFILE;

bool petest_init(PEFILE *pe);
bool petest_ispe(PEFILE *pe);
void petest_deinit(PEFILE *pe);