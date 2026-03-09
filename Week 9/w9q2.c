#include<stdio.h>

int main() {
  
  int *p;
  init(&p);
  printf("%d, %d", *(p+4) ,*(p+7*4+3) );
  return 0;

}
