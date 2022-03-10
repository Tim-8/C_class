#include <stdio.h>

int main()
{
  double a;

  printf("Input int A=");
  scanf("%lf",&a);//%lf（long float)は、scanfでdouble型を入力する時に必要

  printf("A=%f\n",a);
  return 0;
}