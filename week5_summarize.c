#include <stdio.h>

int main(){
  double b,volt;
  int a;


  while(1){
    printf("0~10の間で電圧値を入力してください：");
    scanf("%lf", &volt);
    printf("%f\n", volt);
    if(0<=volt &&volt<=10){
      break;
    }
  }

  b = volt/10.*255.;
  a = (int)(b+0.5);

  printf("%d",a);
  return 0;
}