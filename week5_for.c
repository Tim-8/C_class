#include <stdio.h>

int main(){
  int i,n=100;
  double e=1,kaijo=1;
  for (i =1; i< n; i++){
    kaijo *= i;
    e+=1/kaijo;
    printf("%.10f\n",e);

  }
  return 0;


}