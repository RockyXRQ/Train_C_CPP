#include <stdio.h>
#include <math.h>


int main(){
    int a,b;
    printf("������a��ֵ��");
    scanf("%d",&a);
    printf("������b��ֵ��");
    scanf("%d",&b);
    int sum=pow(a,2)+pow(b,2);
    printf("������ƽ����Ϊ��%d",sum);
    system("pause");
    return 0;
}