#include <stdio.h>
#include <stdlib.h>

float getValue(int);

int main(void) {
    register float total = 0;
    for (int i = 1; i < 21;i++){
        total += (getValue(i)/getValue(i+1));
    }
    printf("%.2f", total);
    system("pause");
    return 0;
}

float getValue(int n){
    if(n==1){
        return 1;
    } else if (n == 2){
        return 2;
    }else{
        return getValue(n - 2) + getValue(n - 1);
    }
}