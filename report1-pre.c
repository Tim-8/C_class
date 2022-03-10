#include <stdio.h>

int main()
{
  int a;
  int b;
  int c = 0;

  printf("Please input number a:");
  scanf("%d",&a);
  printf("Please input number b:");
  scanf("%d",&b);
  
  if( a < 0 || b < 0)
  {
    printf("Please input natural number\n");
  }

  else{
    if( a > b){
      a = b;
    }

    printf("a = %d, b = %d\n",a,b);

    if(a % 2 != 0)
    {
      printf("* a = %d, b = %d\n",a,b);
    }
    else
    {
      printf("a = %d, b = %d\n",a,b);
    }
    while( a > 0){
      if( a % 2 != 0 )
      {
        c = c + b;
        a = a / 2;
        b = b * 2;
        if( a % 2 != 0 ){
          printf("* a = %d, b = %d\n",a,b);
        }
        else{
          printf("a = %d, b = %d\n",a,b);
        }
      }
      else
      {
        a = a / 2;
        b = b * 2;
        if( a % 2 != 0 ){
          printf("* a = %d, b = %d\n",a,b);
        }
        else{
          printf("a = %d, b = %d\n",a,b);
        }
      }
    }
    printf("a * b = %d\n",c);
  }
}