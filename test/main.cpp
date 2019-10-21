#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    float total,money;
    int numb,choice1,choice2;
    char con[20],kl1[20],kl2[20];
    printf("\n\n\t请选择红包类型");
    printf("\n\n\t1.向好友发红包");
    printf("\n\t2.在好友群发红包");
    printf("\n\t3.节日红包");
    printf("\n\t 请输入选项(1/2/3)\n:");
    scanf("%d",&choice1);
    switch(choice1)
    {
      case 1:printf("\n请输入红包金额");
             scanf("%f",&money);
             printf("\n请输入你的祝福语");
             scanf("%s",&con);
             printf("\n%s，你获得红包金额为%f",con,money);
             break;
      case 2:printf("\n请输入红包金额");
             scanf("%f",&total);
             printf("\n请输入红包个数");
             scanf("%d",&numb);
             printf("\n请选择红包发送方式：1.口令红包2.一般红包 \n你的选择是：");
             scanf("%c",&choice2);
             if(choice2==1)
             {
                 money=total/numb;
                 printf("\n请输入你的祝福语：");
                 scanf("%s",con);
                 printf("\n请输入指定口令:");
                 scanf("%s",kl1);
                 printf("\n请输入口令:");
                 scanf("%s",kl2);
                 if (strcmp(kl1,kl2)==0)
                  printf("口令正确！\n%s,红包金额为%f",con,money);
                else
                  printf("口令错误！");

             }
             else
             {
                 money=total/numb;
                 printf("\n请输入你的祝福语：");
                 scanf("%s",&con);
                 printf("\n%s,红包金额为%f",con,money);
             }
                break;
      case 3:printf("\n请输入红包金额");
             scanf("%f",&money);
             if(money==6.66)
                printf("\n六六大顺");
             else
                printf("\n恭喜发财");
             break;
      default:  printf("\n 选项错误\n");
}
    return 0;
}
