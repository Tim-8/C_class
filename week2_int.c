#include <stdio.h>//プログラムは上から下に読まれていくので順番の注意！

//%fのfはfloating  double float

int main()
{
  int int_a;
  int int_b;
  int int_c;
  double double_a;
  double double_b;
  double double_c;

  int_a=2;
  int_b=8;
  double_a=1.1;
  double_b=3.5;

  printf("int_a+int_b= %d\n",int_a+int_b);
  printf("double_a+double_b= %f\n",double_a+double_b);
  printf("int_a+double_b= %f\n",int_a+double_b);

  double_c=int_b;
  printf("double_c= %f\n",double_c);
  int_c=double_b;
  printf("int_c= %d\n",int_c);


  return 0;
}