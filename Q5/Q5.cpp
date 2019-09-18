#include<stdio.h>
#include<stdlib.h>

int numa,numb;
char op;

void time(int a,int b){
    printf("结果为：%d",a*b);
}

void divide(int a,int b){
    printf("结果为：%d",a/b);
}

void plus(int a,int b){
    printf("结果为：%d",a+b);
}

void minus(int a,int b){
    printf("结果为：%d",a-b);
}

int main(){
    printf("请输入算式：");
    scanf("%d%c%d",&numa,&op,&numb);
    switch (op)
    {
        case '*':
        time(numa,numb);
            break;

        case '/' :
        divide(numa,numb);
            break;

        case '+' :
        plus(numa,numb);
            break;

        case '-' :
        minus(numa,numb);
            break;
    
        default:
            break;
    }
    system("pause");
    return 0;
}