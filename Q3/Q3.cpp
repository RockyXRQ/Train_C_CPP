#include<stdio.h>
#include<stdlib.h>

int y(int x){
    if(x<0)
      return 2*x+1;
    else if(x==0)
      return 0;
    else if(x>0)
      return 2*x-1;
}

int input;

int main(){
scanf("%d",&input);
printf("f(x)µÄÊä³öÎª£º%d",y(input));
system("pause");
return 0;
}