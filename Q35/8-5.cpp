#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int getLines(FILE*);
void listInit(FILE*,struct students*);

struct students{
  bool isCalled=false;
  char name[20];
  char stdnNum[20];
};

int main(){    
  printf("���ڿ�ʼ��������������س���ʾ����һ�����֣�");
  register int calledNum=0;
  FILE *fp=fopen("names.txt","r");
  register int lineLen=getLines(fp);
  struct students stdnList[lineLen];
  
  listInit(fp,stdnList);  
  
  while(calledNum!=lineLen){ 
  srand((unsigned int)time(NULL));
  unsigned int randNum =rand()%lineLen;
  if(stdnList[randNum].isCalled!=true)
    getchar();
    printf("���ڱ��е����ǣ�%s",stdnList[randNum].stdnNum);
    calledNum+=1;
  }
  printf("���������Ѿ������ꡣ\n");
  system("pause");
  return 0;
}

int getLines(FILE* fp1){
  register int lines=0;
  while(!feof(fp1)){
   if(fgetc(fp1)=='\n')
    lines++;
  }
  return lines;
}

void listInit(FILE* fp,struct students* stdnList){
  for(int count=0;count<getLines(fp);count++){
    fscanf(fp,"%s%s",stdnList[count].stdnNum,stdnList[count].name);
  }
}




