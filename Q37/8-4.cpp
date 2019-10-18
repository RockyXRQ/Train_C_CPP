#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

typedef void(*pocketFunc)();

void normalPocket(),luckyPocket(),wordPocket();
pocketFunc pocketSwitch();

int main(){
pocketSwitch()();
system("pause");
return 0;
}

pocketFunc pocketSwitch(){
  register int choice=0;
  printf("① 一般红包\n② 拼手气红包\n③ 口令红包\n请选择您要发送的红包类型：");
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
  register float  money=0;
  register int    count=0;
  
  printf("请输入您要发送的金额：");
  scanf("%f",&money);
  printf("请输入您要发送的红包个数：");
  scanf("%d",&count);
  const    int orgCount=count;
  const    float orgMoney=money;
  printf("几个红包的金额分别为：");
  
  while(count>1){
    printf(" %.2f",(float)orgMoney/(float)orgCount);
    money-=orgMoney/orgCount;
    count-=1;
  }
  printf(" %.2f",money);
}

void luckyPocket(){
  register float  money=0;
  register int    count=0;
  
  printf("请输入您要发送的金额：");
  scanf("%f",&money);
  printf("请输入您要发送的红包个数：");
  scanf("%d",&count);
  printf("几个红包的金额分别为：");
  
  while(count>1){
    srand((unsigned int)time(NULL));
    register float temp = float(rand()%((int)money-count));
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
  
  printf("请输入您要发送的金额：");
  scanf("%f",&money);
  printf("请输入您要发送的红包个数：");
  scanf("%d",&count);
  printf("请输入您要设置的口令：(不可多于20个字符）");
  scanf("%s",word);

  while(count>1){
    printf("请输入口令以领取红包:");
    scanf("%s",wordCmp);
    if(strcmp(word,wordCmp)==0){
      srand((unsigned int)time(NULL));
    register float temp = float(rand()%((int)money-count));
    printf(" %.2f",temp);
    money-=temp;
    count-=1;
    }
    else
      printf("口令错误！不可领取红包！");
  }
  printf(" %.2f",money);
}
