#include <stdio.h>

int main(void)
{
  long x;
  long d;
  long q;

  x = 12456;

  printf("%ld = ", x);
  while((x >= 4) && ((x%2) ==0)){
    printf("2 * ");
    x = x / 2;
  }

  d = 3;
  q = x/4;

  while (q >= d){
    if ((x % d) == 0){
      printf("%ld * ",d);
      x = q;
    }
    else{
      d = d +2;
    }
    q = x/ d;
  }
  printf("%ld\n", x);

  return 0;
    
  
}