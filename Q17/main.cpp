#include<stdio.h>  
#include<stdlib.h>       
int main()
{  
    int a,b;              //�������֣�����2�����ͱ���
    double c;             //�������֣�����1��ʵ�ͱ���
    printf("\ta=?");      //�����ʾ��Ϣ
    scanf("%d",a);        //�Ӽ����������a��ֵ
    scanf("%lf",c);       //�Ӽ����������c��ֵ     
    printf("sum is: %lf\n",a+c);  //��������f��ʾ��ʵ�������ʽ���������
    b=a+c;                 //����a+c���㣬�ѽ������ڱ���b��
    printf("sum is: %d\n",b);   //��������d��ʾ��ʮ����������� 
    system("pause"); 
    return 0;
}
