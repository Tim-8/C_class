#include <stdio.h>
#include <stdlib.h>
int main(void){
  int a,b;
  printf("Input integer : ");
  scanf("%d", &a);
  b = abs(a);
  printf("abs(a) = %d\n", b);
  return 0;
}
