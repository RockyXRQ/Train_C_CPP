#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
    char str1[81], str2[81];
    int i;
    printf("Input the first string:\n");
    gets(str1); /*�����ַ���1*/
    printf("Input the second string:\n");
    gets(str2); /*�����ַ���2*/
    for (i = 0; str1[i] == str2[i];
         i++) /*���������бȽ϶�Ӧλ���ϵ��ַ�����ͬ�����ѭ�� */
        if (i >= strlen(str1) ||
            i >= strlen(str2)) /*������һ���ַ����жϽ��������ѭ��������*/
            break;
    if (str1[i] == str2[i])
        printf("0\n"); /*ѭ������ʱ,���ַ���ͬʱ����,���0*/
    else if ((str1[i] - str2[i]) > 0)
        printf("%d",
               str1[i] - str2[i]); /* �ҵ���Ӧλ�ò�ͬ�ַ�,�������ַ�ֵ֮�� */
    else
        printf("<");

    system("pause");
    return 0;
}
