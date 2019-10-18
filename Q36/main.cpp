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
  printf("请问您要向谁发红包呢？（①好友 ②好友群）");
  scanf("%d",&objSwitch);
  if(objSwitch==1||objSwitch==2)
    pocketSwitch()();
  else{
    printf("选择错误！");
    system("pause");
    exit(0);
  }
}

void userInit(){
  printf("请输入您的零钱余额：");
  scanf("%f",&user.changeBlc);
  printf("请输入您的银行卡余额：");
  scanf("%f",&user.bankBlc);
}

pocketFunc pocketSwitch(){
  register int choice=0;
  printf("\n① 一般红包\n② 拼手气红包\n③ 口令红包\n请选择您要发送的红包类型：");
  scanf("%d",&choice);
    if(choice==1)
      return normalPocket;
    else if(choice==2)
      return luckyPocket;
    else if(choice==3)
      return wordPocket;
    else{
      printf("输入错误！");
      system("pause");
      exit(0);
    }
  }

void normalPocket(){
  float  money=0;
  int    count=0;
  char   sntnce[20];
  
  printf("请输入您要发送的金额：");
  scanf("%f",&money);
  if(money>user.bankBlc && money>user.changeBlc){
    printf("余额不足,无法发送红包！");
    system("pause");
    exit(0);
  }
  printf("请输入您要发送的红包个数：");
  scanf("%d",&count);
  const    int orgCount=count;
  const    int orgMoney=money;
  printf("请输入一条祝福语：");
  scanf("%s",sntnce);
  if(fabs(money-6.66)<0.00001)
    strcpy(sntnce,"六六大顺");
  printf("\n祝福语：%s\n",sntnce);
  
  printf("红包的金额分别为：");
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
  
  printf("请输入您要发送的金额：");
  scanf("%f",&money);
  if(money>user.bankBlc && money>user.changeBlc){
    printf("余额不足,无法发送红包！");
    system("pause");
    exit(0);
  }
  
  printf("请输入您要发送的红包个数：");
  scanf("%d",&count);
  printf("请输入一条祝福语：");
  scanf("%s",sntnce);
  if(fabs(money-6.66)<0.00001)
    strcpy(sntnce,"六六大顺");
  
  printf("\n祝福语：%s\n",sntnce);
  
  printf("红包的金额分别为：");
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
  printf("请输入您要发送的金额：");
  scanf("%f",&money);
  if(money>user.bankBlc && money>user.changeBlc){
    printf("余额不足,无法发送红包！");
    system("pause");
    exit(0);
  }
  printf("请输入您要发送的红包个数：");
  scanf("%d",&count);
  printf("请输入您要设置的口令：(不可多于20个字符）");
  scanf("%s",word);
  
  printf("请输入一条祝福语：");
  scanf("%s",sntnce);
  if(fabs(money-6.66)<0.00001)
    strcpy(sntnce,"六六大顺");
  printf("\n祝福语：%s\n",sntnce);

  while(count>1){
    printf("请输入口令以领取红包:");
    scanf("%s",wordCmp);
    if(strcmp(word,wordCmp)==0){
      srand((unsigned int)time(NULL));
    register float temp = float(rand()%((int)money-count)+0.01);
    printf(" %.2f",temp);
    money-=temp;
    count-=1;
    }
    else
      printf("口令错误！不可领取红包！");
  }
  printf(" %.2f",money);
}
