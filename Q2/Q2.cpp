#include <stdio.h>
#include <math.h>


int main(){
    int a,b;
    printf("请输入a的值：");
    scanf("%d",&a);
    printf("请输入b的值：");
    scanf("%d",&b);
    int sum=pow(a,2)+pow(b,2);
    printf("两数的平方和为：%d",sum);
    system("pause");
    return 0;
}