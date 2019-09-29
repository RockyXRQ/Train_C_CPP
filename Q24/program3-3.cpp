#include <stdio.h>
#include <stdlib.h>

void decode(char*);
char *pin;

int main(){   
pin = (char*)malloc(100);
scanf("%s",pin);
decode(pin);
printf("%s\n",pin);
system("pause");
return 0;
}

void decode(char*temp){
while(*temp){
     if(*temp<='W'&&*temp>='A')
         *temp+=3;
     else if(*temp<='Z'&&*temp>='X')
         *temp-=23;
     temp++;
    }
}

