#include<stdio.h>  
#include<stdlib.h>       
int main()
{  
    int a,b;              //声明部分，定义2个整型变量
    double c;             //声明部分，定义1个实型变量
    printf("\ta=?");      //输出提示信息
    scanf("%d",a);        //从键盘输入变量a的值
    scanf("%lf",c);       //从键盘输入变量c的值     
    printf("sum is: %lf\n",a+c);  //输出结果。f表示用实型输出格式输出运算结果
    b=a+c;                 //进行a+c运算，把结果存放在变量b中
    printf("sum is: %d\n",b);   //输出结果。d表示用十进制整数输出 
    system("pause"); 
    return 0;
}
