#include "stdio.h"
#include <stdlib.h>

int main(){   
register float height,weight,std_weight;
register char sex;
printf("�������������:");
scanf("%f",&height);
printf("�����������Ա�:");
scanf("%c",&sex);
if(sex=='B')
std_weight=(height-100)*0.9;
else if(sex=='G')
std_weight=(height-100)*0.9-2.5;
printf("��������������");
scanf("%f",&weight);
if(weight<0.8*std_weight)
printf("�����ڳ���");
else if(weight<0.9*std_weight&&weight>0.8*std_weight)
printf("������ƫ��");
else if(weight==std_weight*1.1)
printf("��������������");
else if(weight>std_weight*1.1&&weight<std_weight*1.2)
printf("�����ڳ���");
else if(weight>std_weight*1.2&&weight<std_weight*1.3)
printf("��������ȷ���");
else if(weight>std_weight*1.3&&weight<std_weight*1.5)
printf("�������жȷ���");
else if(weight>std_weight*1.5)
printf("�������ضȷ���");
else
printf("�����ڱ�׼����");
printf("\n");
system("pause");
return 0;
}
