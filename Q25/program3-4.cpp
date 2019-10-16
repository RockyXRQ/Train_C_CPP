#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void bmiTest(float);

int main(){   
register float height,weight,bmi;

printf("请输入您的身高:(以米为单位）");
scanf("%f",&height);
printf("请输入您的体重:(以千克为单位)");
scanf("%f",&weight);

bmiTest(float(weight/pow(height,2)));

system("pause");
return 0;
}

void bmiTest(float bmi){
    printf("您的BMI值为：%.2f\n",bmi);
    if(bmi<18.5)
        printf("您属于偏瘦。\n");
    else if(bmi>=18.5&&bmi<25)
        printf("您属于正常。\n");
    else if(bmi>=25&&bmi<30)
        printf("您属于偏胖。\n");
    else if(bmi>=30&&bmi<35)
        printf("您属于肥胖。\n");
    else if(bmi>=35&&bmi<40)
        printf("您属于重度肥胖。\n");
    else if(bmi>=40)
        printf("您属于极重度肥胖。\n");
}

