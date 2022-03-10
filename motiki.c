#include <stdio.h>
#include <stdlib.h>
#define  X(n) (n != 0? '*' : '.')

int main(void){
    
FILE *fin;
FILE *fout;
int data;   
 
if((fin = fopen("input_report3.txt", "r")) == NULL){
        printf("Cannot open the file.\n");
        exit(1);
    }
   
    if((fout = fopen("output_report3.txt", "w")) == NULL){
        printf("Cannot open the file.\n");
        exit(1);
    }
    
  
   
    while(fscanf(fin, "%lc\n", &data) != EOF){
        printf("%c",data);
        fprintf(fout,"%c",data);
       
      
    }     
 
void disp(char x ,FILE *fout){
int tenji[][3][2] = {
{{1,0},{0,0},{0,0}},  
{{1,0},{1,0},{0,0}},     
{{1,1},{0,0},{0,0}},  
{{1,1},{0,1},{0,0}},  
{{1,0},{0,1},{0,0}}, 
{{1,1},{1,0},{0,0}}, 
{{1,1},{1,1},{0,0}}, 
{{1,0},{1,1},{0,0}}, 
{{0,1},{1,0},{0,0}}, 
{{0,1},{1,1},{0,0}}, 
{{1,0},{0,0},{1,0}}, 
{{1,0},{1,0},{1,0}}, 
{{1,1},{0,0},{1,0}}, 
{{1,1},{0,1},{1,0}}, 
{{1,0},{0,1},{1,0}}, 
{{1,1},{1,0},{1,0}}, 
{{1,1},{1,1},{1,0}}, 
{{1,0},{1,1},{1,0}}, 
{{0,1},{1,0},{1,0}}, 
{{0,1},{1,1},{1,0}}, 
{{1,0},{0,0},{1,1}}, 
{{1,0},{1,0},{1,1}}, 
{{0,1},{1,1},{0,1}}, 
{{1,1},{0,0},{1,1}}, 
{{1,1},{0,1},{1,1}}, 
{{1,0},{0,1},{1,1}},     
};


    int i = x - 97;
    if(i >= 0 && i < 26){
        fprintf(fout,"\n '%c' \n",x);
        fprintf(fout," %c %c\n", X(tenji[i][0][0]),X(tenji[i][0][1]));
        fprintf(fout," %c %c\n", X(tenji[i][1][0]),X(tenji[i][1][1]));
        fprintf(fout," %c %c\n", X(tenji[i][2][0]),X(tenji[i][2][1]));
    }
}


    

  char *str = "data";
  
  while(*str)
  disp(*str++);

  return 0;
}
