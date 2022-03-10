#include <stdio.h>

int main()
{
  int a,b,c,d1,d2;
  printf("Input two integer");
  scanf("%d%d",&d1,&d2);
  a=d1==d2;
  b=d1>d2;
  c=d1&&d2;
  printf("a=%d\nb=%d\nc=%d\n",a,b,c);
}
