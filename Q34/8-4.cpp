#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>

typedef void(*pocketFunc)();

void normalPocket();
void luckyPocket();
void wordPocket();

double GetRandNum(int,int,int,int);

pocketFunc pocketSwitch();

int main(){
pocketSwitch()();

system("pause");
return 0;
}

pocketFunc pocketSwitch(){
  int choice=0;
  printf("�� һ����\n�� ƴ�������\n�� ������\n��ѡ����Ҫ���͵ĺ�����ͣ�");
  scanf("%d",&choice);
    if(choice==1)
      return normalPocket;
    else if(choice==2)
      return luckyPocket;
    else if(choice==3)
      return wordPocket;
    else{
      printf("�������");
      system("pause");
      exit(0);
    }
  }

void normalPocket(){
  float  money=0;
  int    count=0;
  
  printf("��������Ҫ���͵Ľ�");
  scanf("%f",&money);
  printf("��������Ҫ���͵ĺ��������");
  scanf("%d",&count);
  const int orgCount=count;
  const int orgMoney=money;
  printf("��������Ľ��ֱ�Ϊ��");
  
  while(count>1){
    printf(" %.2f",(float)orgMoney/(float)orgCount);
    money-=orgMoney/orgCount;
    count-=1;
  }
  printf(" %.2f",money);
}

void luckyPocket(){
  float  money=0;
  int    count=0;
  
  printf("��������Ҫ���͵Ľ�");
  scanf("%f",&money);
  printf("��������Ҫ���͵ĺ��������");
  scanf("%d",&count);
  printf("��������Ľ��ֱ�Ϊ��");
  
  while(count>1){
    srand((unsigned)time(NULL));
    register double temp=GetRandNum(0,money,count,2);
    printf(" %.2f",temp);
    money-=temp;
    count-=1;
  }
  printf(" %.2f",money);
}

void wordPocket(){
  register float money=0;
  register int   count=0;
  char* word = (char*)malloc(21);
  char* wordCmp = (char*)malloc(21);
  printf("��������Ҫ���͵Ľ�");
  scanf("%f",&money);
  printf("��������Ҫ���͵ĺ��������");
  scanf("%d",&count);
  printf("��������Ҫ���õĿ��(���ɶ���20���ַ���");
  scanf("%s",word);

  while(count>1){
    printf("�������������ȡ���:");
    scanf("%s",wordCmp);
    if(strcmp(word,wordCmp)==0){
      srand((unsigned)time(NULL));
    register double temp=GetRandNum(0,money,count,2);
    printf(" %.2f",temp);
    money-=temp;
    count-=1;
    }
    else
      printf("������󣡲�����ȡ�����");
  }
  printf(" %.2f",money);
}

double GetRandNum(int rangeLow,int rangeHigh,int times,int pit){
  srand((unsigned)time(NULL));
  register double temp = (rand()%(rangeHigh*(int)pow(10,pit)-rangeLow*(int)pow(10,pit))+rangeLow*(int)pow(10,pit))/pow(10,pit);
  return temp-times*(1/pow(10,2));
}