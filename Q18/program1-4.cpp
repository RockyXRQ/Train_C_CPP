#include<stdio.h>
#include<stdlib.h>

#define PWD 25

int main(){
int ages;
printf("\t上班时间到了，快去呼叫小智吧！\n");
printf("\t请输入密码.\n你多大了？\n");
scanf("%2d",&ages);  //输入函数，输入整数年龄值
if(ages==PWD)
    printf("\t欢迎使用小智，新的一天启动了！\n");
else
    printf("\t对不起，您不是小智的主人！\n");
system("pause");
return 0;
}

