#include <stdio.h>

int main()
{
  int i;
  int a[3][1] = {{4},{5},{9}};
  int b[3][1] = {{3},{8},{7}};
  int c[3][1];
  for(i=0;i<3;i++){
    c[i][0] = a[i][0] + b[i][0];
  }
  for(i=0;i<3;i++){
    printf("%d\n", c[i][0]);
  }
  return 0;

}