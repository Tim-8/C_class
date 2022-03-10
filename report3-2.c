#include <stdio.h>
int main(void) 
{
  int i  = 0;
  int j = 0;
  char moji[100];
  char num[100];

  printf("文字列 = ");
  scanf("%s", moji);
 
  while(moji[i])
    printf("%d " , moji[i++]);
    num[j] = moji[i++];
 
  printf("\n");
 
  if(97 <= num[j] && 116 >= num[j])
  {
    printf("* .");
  }
  return 0;
}