#include <stdio.h>
#include <math.h>

int main()
{
  float length_1 = 0.5;//第1リンクの長さ
  float length_2 = 0.5;//第2リンクの長さ

  int theta_1_frequency ;//初期状態におけるtheta_1 (度数表記)
  int theta_2_frequency ;//初期状態におけるtheta_2 (度数表記)

  printf("Please input theta_1:");//theta_1の入力の指示
  scanf("%d",&theta_1_frequency);
  printf("Please input theta_2:");//theta_2の入力の指示
  scanf("%d",&theta_2_frequency);
  printf("\n");

  printf("Input theta 1 [deg] = %d\n",theta_1_frequency);
  printf("Input theta 2 [deg] = %d\n",theta_2_frequency);

  float theta_1 = theta_1_frequency * M_PI/180;//度からラジアンへの変換関数
  float theta_2 = theta_2_frequency * M_PI/180;//度からラジアンへの変換関数

  float x = fabs(length_1 * cos(theta_1) + length_2 * cos(theta_1 + theta_2));//手先位置のx座標
  float y = length_1 * sin(theta_1) + length_2 * sin(theta_1 + theta_2);//手先位置のy座標

  float target_x = 0;//目標値のx座標
  float target_y = 0.8;//目標値のy座標
  
  float distance_x = fabsf(target_x - x) / 4;//中間点間の距離 (x軸)
  float distance_y = fabsf(target_y - y) / 4;//中間点間の距離 (y軸)
  
  int i;

  printf("x = %lf, y = %lf\n",x,y);

  for(i=1;i<5;++i)
  {
    float array_x[i];
    float array_y[i];
    float now_theta_1;
    float now_theta_2;
    
    x = x + distance_x;
    y = y + distance_y;
    array_x[i] = x;
    array_y[i] = y;

    float d = (pow(x,2) + pow(y,2) + pow(length_1,2) - pow(length_2,2)) / (2*length_1);
    float e = (pow(x,2) + pow(y,2) - pow(length_1,2) + pow(length_2,2)) / (2*length_2);
    now_theta_1 = atan(-(sqrt(pow(x,2) + pow(y,2) - pow(d,2))) / d) + atan(y/ x);//それぞれの中間点でのtheta_1の角度
    now_theta_2 = atan((sqrt(pow(x,2) + pow(y,2) - pow(e,2))) / e) - atan(-(sqrt(pow(x,2) + pow(y,2) - pow(d,2))) / d);//それぞれの中間点でのtheta_2の角度
 
    printf("x[%d] = %lf, y[%d] = %lf, theta_1 = %lf, theta_2 = %lf\n", i-1,array_x[i],i-1,array_y[i],now_theta_1*180/M_PI,now_theta_2*180/M_PI);//中間点のx座標, y座標, 逆運動学の結果を表示
  }
}