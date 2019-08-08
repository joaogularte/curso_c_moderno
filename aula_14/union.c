#include <stdio.h>
#include <string.h>

union un {
  unsigned char id;
  unsigned int nu;
};

int main (int argc, char *argv[]) {
  union un s;
  s.id = 245;

  printf("s.id: %p\n", &s.id);  
  printf("s.nu: %p\n", &s.nu);  
  
  printf("s.id: %d\n", s.id);  
  printf("s.num: %d\n", s.nu);  
  //memset(&s, 0, sizeof(union un));
  //printf("s.id: %d\n", s.id);  
  //printf("s.num: %d\n", s.nu);  

  printf("%d\n", sizeof(s));
  return 0;
}
