#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
    char str[81], s[20], c;
    int i, j, word = 0;
    printf("Enter the string\n");
    gets(str);
    i = 0;
    j = 0;
    while ((c = str[i]) != '\0') {
        if (c == ' ') {  //�ո��ʾ���ʽ���
            s[j] = str[i + 1];
            ++j;
        }  //�Ѻ��浥�ʵĵ�һ����ĸ�������ַ���
        else if (c != ' ' && word == 0) {
            word = 1;
            s[j] = c;
            ++j;  //�ѵ�һ�����ʵĵ�һ����ĸ�������ַ���
        }
        i++;
    }
    //���ַ����ӽ�β��
    printf("The new string is:%s\n", s);
    system("pause");
    return 0;
}
