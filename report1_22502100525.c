#include <stdio.h>

int main()
{
  int a;
  int b;
  int c = 0;
  int tmp;

  printf("Please input number a:");//aの数の入力の指示
  scanf("%d",&a);
  printf("Please input number b:");//bの数の入力の指示
  scanf("%d",&b);
  printf("\n");

  if( a < 0 || b < 0)//負の数が入力された時
  {
    printf("Please input natural number\n");//再度正の値の入力の指示
  }

  else//a,bともに自然数が入力された時
  {
    if( a > b)//入力した数の小さい数がaになる
    {
      tmp = b;
      b = a;
      a = tmp;
    }

    printf("  a = %d, b = %d\n",a,b);//入力した2変数
    printf("\n");

    //↓計算過程
    if(a % 2 != 0)//aが奇数の時
      printf("* a = %d, b = %d\n",a,b);
    else
      printf("  a = %d, b = %d\n",a,b);
    while( a > 0)//aが0以下になるまで繰り返す
    {
      if( a % 2 != 0 )//aが奇数の時
      {
        c = c + b;
      }
      a = a / 2;
      b = b * 2;
      if( a % 2 != 0 )//aが奇数の時
        printf("* a = %d, b = %d\n",a,b);
      else
        printf("  a = %d, b = %d\n",a,b);
    }
    printf("\n");
    printf("  a * b = %d\n",c);//掛け算の結果
  }
}