#include "stdio.h"
#include <stdlib.h>
int main()
{
    char gender, ms;
    int age;
     /*接受司机的详细信息*/
    printf("\n\n\t司机的详细信息\n\n");
    printf("\n\t司机的婚姻状况(y/n):");
    scanf("%c",&ms);fflush(stdin);
    printf("\n\t司机的性别(M/F):");
    scanf("%c",&gender);fflush(stdin);
    printf("\n\t司机的年龄:");
    scanf("%d",&age);
    /* 多重 if 结构 */
    if (ms=='y') /*检查司机的婚姻状况*/
        printf("\n\t该司机可以投保\n");
    else if(age>30&&gender=='M')
        /*如果未婚，检查是否是30岁以上的男性 */
        printf("\n\t该司机可以投保\n");
    else if(age>25&&gender=='F')
        /* 检查是否是25岁以上的女性*/
        printf("\n\t该司机可以投保\n");
    else
        printf("\n\t该司机不能投保\n");
    system("pause");
    return 0;  
}
