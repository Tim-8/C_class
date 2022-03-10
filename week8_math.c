#include <stdio.h>
#include <math.h>
#define PI 3.14149226535

int main(){
  double deg, rad,s,c,t;
  printf("Input degree =");
  scanf("%lf", &deg);
  rad = M_PI * deg / 180;
  printf("%f [deg] = %f [rad]\n", deg,rad);
  s = sin(rad);
  c = cos(rad);
  t = tan(rad);
  printf("sin(%f) = %f\n",deg,s);
  printf("cos(%f) = %f\n",deg,c);
  printf("tan(%f) = %f\n",deg,t);
  return 0;
  
}