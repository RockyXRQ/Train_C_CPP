#include "stdio.h"
#include <stdlib.h>

int main(){   
register float height,weight,std_weight;
register char sex;
printf("请输入您的身高:");
scanf("%f",&height);
printf("请输入您的性别:");
scanf("%c",&sex);
if(sex=='B')
std_weight=(height-100)*0.9;
else if(sex=='G')
std_weight=(height-100)*0.9-2.5;
printf("请输入您的体重");
scanf("%f",&weight);
if(weight<0.8*std_weight)
printf("您属于超瘦");
else if(weight<0.9*std_weight&&weight>0.8*std_weight)
printf("您属于偏瘦");
else if(weight==std_weight*1.1)
printf("您属于正常体重");
else if(weight>std_weight*1.1&&weight<std_weight*1.2)
printf("您属于超重");
else if(weight>std_weight*1.2&&weight<std_weight*1.3)
printf("您属于轻度肥胖");
else if(weight>std_weight*1.3&&weight<std_weight*1.5)
printf("您属于中度肥胖");
else if(weight>std_weight*1.5)
printf("您属于重度肥胖");
else
printf("您属于标准体重");
printf("\n");
system("pause");
return 0;
}
