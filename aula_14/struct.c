#include <stdio.h>
#include <string.h>

struct st {
  unsigned char id;
  unsigned int nu;
};

int main (int argc, char *argv[]) {
  struct st s;
  s.id = 2;
  s.nu = 2017;
  printf("s.id: %d\n", s.id);  
  printf("s.num: %d\n", s.nu);  
  memset(&s, 0, sizeof(struct st));
  printf("s.id: %d\n", s.id);  
  printf("s.num: %d\n", s.nu);  

  printf("%d\n", sizeof(s));
  return 0;
}
