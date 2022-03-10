#include <stdio.h>

int main(){
  int a,b,tmp;
  double rem;

  printf("整数値を二つ、スペースを開けて入力してください：");
  scanf("%d%d",&a,&b);

  if(a<b){
    tmp =a;
    a=b;
    b=tmp;

  }
  while(1){
    rem=a%b;
    if(rem==0)
      break;
    a=b;
    b=rem;
  }
  printf("最大公約数は%dです\n",b);
  return 0;
}