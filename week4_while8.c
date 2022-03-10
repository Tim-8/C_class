#include <stdio.h>

int main()
{
  double t=0,dt=0.01,sum=0,v=0;
  while(1){
    printf("integrate=%f\n",sum+=v*dt);
    v+=dt;
    t+=dt;
    if(t>0.1) break;
  }
}

