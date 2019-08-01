#include <stdio.h>

// ** - nivel de indiferença

int main (int argc, char *argv[]) {
  printf("%p\n", argv);
 
  printf("%c\n", *(*(argv+1)+1));
   
  //printf("%c\n", **argv);
  return 0;
}
