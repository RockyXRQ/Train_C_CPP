#include <stdio.h>
#include <stdlib.h>
int main() {
    int a, b, sum;  //声明部分，定义3个整型变量
    a = 32767;      //对变量a赋值
    b = 456;
    sum = a + b;  //进行a+b运算，把结果存放在变量sum中
    printf("sum is: %d\n", sum);  //输出结果。d表示用十进制整数输出
    a = 789;
    sum = a + b;  //进行a+b运算，把结果存放在变量sum中
    printf("sum is: %d\n", sum);  //输出结果。d表示用十进制整数输出
    system("pause");
    return 0;
}
