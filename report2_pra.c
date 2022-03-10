#include <stdio.h>
#include <math.h>

int main()
{
  float length_1 = 0.5;
  float length_2 = 0.5;

  int theta_1_frequency = 45;
  int theta_2_frequency = 90;

  printf("Input theta 1 [deg] = %d\n",theta_1_frequency);
  printf("Input theta 2 [deg] = %d\n",theta_2_frequency);

  float theta_1 = theta_1_frequency * M_PI/180;
  float theta_2 = theta_2_frequency * M_PI/180;

  float x = length_1 * cos(theta_1) + length_2 * cos(theta_1 + theta_2);
  float y = length_1 * sin(theta_1) + length_2 * sin(theta_1 + theta_2);

  float target_x = 0;
  float target_y = 0.8;
  
  float distance_x = fabsf(target_x - x) / 4;
  float distance_y = fabsf(target_y - y) / 4;
  
  int i;
  
  printf("x = %lf, y = %lf\n",x,y);

  for(i=1;i<5;++i)
  {
    float array_x[i];
    float array_y[i];

    x = x + distance_x;
    y = y + distance_y;
    array_x[i] = x;
    array_y[i] = y;
 
    printf("x[%d] = %lf, y[%d] = %lf\n", i-1,array_x[i],i-1,array_y[i]);
  }

  /*for(i=0; i < 3; i++ ){
    array_x[i] = theta_1;
    array_y[i] = theta_2;

    theta_2 = theta_2 + 1;
    printf("x[%d] = %lf, y[%d] = %lf\n", i,array_x[],i,array_y[]);
  }*/
  
  
  /*float d = (x^2 + y^2 + length_1^2 - length_2^2) / (2 * length_1);
  float e = (x^2 + y^2 - length_1^2 + length_2^2) / (2 * length_2);


  theta_1 = atan(-(sqrt(x^2 + y^2 -D^2)) / D) + atan(y/ x);*/
 
 
}