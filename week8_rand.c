#include <stdio.h>
#include <stdlib.h>
#include  <time.h>
#define NUM_DISPLAY 10
int main(){
  int i,random;
  srand((unsigned) time(NULL));
  for (int i = 0; i < NUM_DISPLAY; i++){
    random = rand();
    printf("random = %d\n",random);
  }


}