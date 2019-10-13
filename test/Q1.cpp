#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
int a=0,i=1;
a=++i;
i=1;
printf("%d\n",a);
a=i++;
i=1;
printf("%d\n",a);
system("pause");
return 0 ;
}