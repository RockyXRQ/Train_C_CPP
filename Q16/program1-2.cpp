#include <stdio.h>
#include <stdlib.h>
int main() {
    int a, b, sum;  //�������֣�����3�����ͱ���
    a = 32767;      //�Ա���a��ֵ
    b = 456;
    sum = a + b;  //����a+b���㣬�ѽ������ڱ���sum��
    printf("sum is: %d\n", sum);  //��������d��ʾ��ʮ�����������
    a = 789;
    sum = a + b;  //����a+b���㣬�ѽ������ڱ���sum��
    printf("sum is: %d\n", sum);  //��������d��ʾ��ʮ�����������
    system("pause");
    return 0;
}
