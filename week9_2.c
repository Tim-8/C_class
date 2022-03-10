#include <stdio.h>

double average(double a, double b){
  double ave;
  ave = (a + b) / 2;
  return ave;
}

int main(){
  double apple = 45, banana =23.2, ans;
  ans = average(apple,banana);
  printf("Answer = %lf\n", ans);
}