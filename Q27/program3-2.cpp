#include <stdio.h>
#include <stdlib.h>

int main()
{
    float F,C;
    printf ("please input C:");
    scanf ("%f",&C);
    F=((float)9/(float)5)*C+32;
    printf("F=%.2f\n",F);
    system("pause");
    return 0;
}
