#include <stdio.h>
#include <math.h>

int main()
{
  float first_degree;
  float second_degree;                                                                                                                                                                                                                                                                                            
  float first_length;
  float second_length;
  float x;
  float y;

  first_degree = 45 *M_PI/180;
  second_degree = 90 *M_PI/180 ;
  first_length = 0.5 *M_PI/180;
  second_length = 0.5 *M_PI/180;

  x = first_length * cos(first_degree) + second_length * cos(first_degree+second_degree);

  y = first_length * sin(first_degree) + second_length * sin(first_degree+second_degree);

  //printf("%f\n",x);
  printf("%f\n",y);


}