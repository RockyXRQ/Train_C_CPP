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
        if (c == ' ') {  //空格表示单词结束
            s[j] = str[i + 1];
            ++j;
        }  //把后面单词的第一个字母赋给新字符串
        else if (c != ' ' && word == 0) {
            word = 1;
            s[j] = c;
            ++j;  //把第一个单词的第一个字母赋给新字符串
        }
        i++;
    }
    //新字符串加结尾符
    printf("The new string is:%s\n", s);
    system("pause");
    return 0;
}
