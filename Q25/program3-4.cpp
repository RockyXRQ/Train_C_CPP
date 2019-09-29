#include "stdio.h"
#include <stdlib.h>

int main(){   
register float input;
scanf("%f",&input);
printf("%.2f",(input-100)*0.9);
system("pause");
return 0;
}
