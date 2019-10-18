#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>

typedef void(*pocketFunc)();

struct User{
  float changeBlc=0;
  float bankBlc=0;
}user;

void normalPocket();
void luckyPocket();
void wordPocket();
void mainUI();
void userInit();
pocketFunc pocketSwitch();

int main(){
mainUI();

system("pause");
return 0;
}

void mainUI(){
  int objSwitch=0;
  userInit();
  printf("������Ҫ��˭������أ����ٺ��� �ں���Ⱥ��");
  scanf("%d",&objSwitch);
  if(objSwitch==1||objSwitch==2)
    pocketSwitch()();
  else{
    printf("ѡ�����");
    system("pause");
    exit(0);
  }
}

void userInit(){
  printf("������������Ǯ��");
  scanf("%f",&user.changeBlc);
  printf("�������������п���");
  scanf("%f",&user.bankBlc);
}

pocketFunc pocketSwitch(){
  register int choice=0;
  printf("\n�� һ����\n�� ƴ�������\n�� ������\n��ѡ����Ҫ���͵ĺ�����ͣ�");
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
  char   sntnce[20];
  
  printf("��������Ҫ���͵Ľ�");
  scanf("%f",&money);
  if(money>user.bankBlc && money>user.changeBlc){
    printf("����,�޷����ͺ����");
    system("pause");
    exit(0);
  }
  printf("��������Ҫ���͵ĺ��������");
  scanf("%d",&count);
  const    int orgCount=count;
  const    int orgMoney=money;
  printf("������һ��ף���");
  scanf("%s",sntnce);
  if(fabs(money-6.66)<0.00001)
    strcpy(sntnce,"������˳");
  printf("\nף���%s\n",sntnce);
  
  printf("����Ľ��ֱ�Ϊ��");
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
  char   sntnce[20];
  
  printf("��������Ҫ���͵Ľ�");
  scanf("%f",&money);
  if(money>user.bankBlc && money>user.changeBlc){
    printf("����,�޷����ͺ����");
    system("pause");
    exit(0);
  }
  
  printf("��������Ҫ���͵ĺ��������");
  scanf("%d",&count);
  printf("������һ��ף���");
  scanf("%s",sntnce);
  if(fabs(money-6.66)<0.00001)
    strcpy(sntnce,"������˳");
  
  printf("\nף���%s\n",sntnce);
  
  printf("����Ľ��ֱ�Ϊ��");
  while(count>1){
    srand((unsigned int)time(NULL));
    register float temp = float(rand()%((int)money-count)+0.01);
    printf(" %.2f",temp);
    money-=temp;
    count-=1;
  }
  printf(" %.2f",money);
}

void wordPocket(){
   float money=0;
   int   count=0;
   char  sntnce[20];
  char* word = (char*)malloc(21);
  char* wordCmp = (char*)malloc(21);
  printf("��������Ҫ���͵Ľ�");
  scanf("%f",&money);
  if(money>user.bankBlc && money>user.changeBlc){
    printf("����,�޷����ͺ����");
    system("pause");
    exit(0);
  }
  printf("��������Ҫ���͵ĺ��������");
  scanf("%d",&count);
  printf("��������Ҫ���õĿ��(���ɶ���20���ַ���");
  scanf("%s",word);
  
  printf("������һ��ף���");
  scanf("%s",sntnce);
  if(fabs(money-6.66)<0.00001)
    strcpy(sntnce,"������˳");
  printf("\nף���%s\n",sntnce);

  while(count>1){
    printf("�������������ȡ���:");
    scanf("%s",wordCmp);
    if(strcmp(word,wordCmp)==0){
      srand((unsigned int)time(NULL));
    register float temp = float(rand()%((int)money-count)+0.01);
    printf(" %.2f",temp);
    money-=temp;
    count-=1;
    }
    else
      printf("������󣡲�����ȡ�����");
  }
  printf(" %.2f",money);
}
