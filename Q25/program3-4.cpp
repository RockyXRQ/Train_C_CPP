#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void bmiTest(float);

int main(){   
register float height,weight,bmi;

printf("�������������:(����Ϊ��λ��");
scanf("%f",&height);
printf("��������������:(��ǧ��Ϊ��λ)");
scanf("%f",&weight);

bmiTest(float(weight/pow(height,2)));

system("pause");
return 0;
}

void bmiTest(float bmi){
    printf("����BMIֵΪ��%.2f\n",bmi);
    if(bmi<18.5)
        printf("������ƫ�ݡ�\n");
    else if(bmi>=18.5&&bmi<25)
        printf("������������\n");
    else if(bmi>=25&&bmi<30)
        printf("������ƫ�֡�\n");
    else if(bmi>=30&&bmi<35)
        printf("�����ڷ��֡�\n");
    else if(bmi>=35&&bmi<40)
        printf("�������ضȷ��֡�\n");
    else if(bmi>=40)
        printf("�����ڼ��ضȷ��֡�\n");
}

