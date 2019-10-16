#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int gerLines(FILE*);
void listInit(FILE*,struct students*);

struct students{
  bool isCalled=false;
  char name[20]={0};
  char stdnNum[20]={0};
};

int main(){    
  printf("现在开始随机点名！（按回车显示入下一个名字）");
  register int calledNum=0;
  FILE *fp=fopen("names.txt","r");
  register int lineLen=gerLines(fp);
  struct students stdnList[lineLen];
  
  listInit(fp,stdnList);  
  
  while(calledNum!=lineLen){ 
  srand((unsigned int)time(NULL));
  unsigned int randNum =rand()%lineLen;
  if(stdnList[randNum].isCalled!=true)
    getchar();
    printf("现在被叫到的是：%s\n",stdnList[randNum].name);
    calledNum+=1;
  }
  printf("所有名字已经被点完。");
  system("pause");
  return 0;
}

int gerLines(FILE* fp1){
  register int lines=0;
  while(!feof(fp1)){
   if(fgetc(fp1)=='\n')
    lines++;
  }
  return lines;
}

void listInit(FILE* fp,struct students* stdnList){
  for(int count=0;count<gerLines(fp);count++){
    fscanf(fp,"%s%s",stdnList[count].stdnNum,stdnList[count].name);
  }
}




