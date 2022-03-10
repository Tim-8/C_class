#include <stdio.h>

void change_moji_to_number()
{
  int i  = 0;
  char moji[100];

  printf("word = ");
  scanf("%s", moji);
 
  /* ASCIIコードを出力 */
  while(moji[i])
    printf("%d " , moji[i++]);
 
  printf("\n");
 
  return 0;
}

//int main(void)
//{
  //change_moji_to_number();
//}