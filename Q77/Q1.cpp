#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
    char str1[81], str2[81];
    int i;
    printf("Input the first string:\n");
    gets(str1); /*输入字符串1*/
    printf("Input the second string:\n");
    gets(str2); /*输入字符串2*/
    for (i = 0; str1[i] == str2[i];
         i++) /*在两个串中比较对应位置上的字符，相同则继续循环 */
        if (i >= strlen(str1) ||
            i >= strlen(str2)) /*当其中一个字符串判断结束，则从循环中跳出*/
            break;
    if (str1[i] == str2[i])
        printf("0\n"); /*循环结束时,两字符串同时结束,输出0*/
    else if ((str1[i] - str2[i]) > 0)
        printf("%d",
               str1[i] - str2[i]); /* 找到对应位置不同字符,返回两字符值之差 */
    else
        printf("<");

    system("pause");
    return 0;
}
