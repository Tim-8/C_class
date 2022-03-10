#include <stdio.h>

double average(double , double);

int main(){
  double x=45,y =23.2,ans;
  ans = average (x,y);
  printf("Answer = %lf\n", ans);
}

double average(double a, double b){
  double ave;
  ave = (a+ b )/ 2;
  return ave; 
}