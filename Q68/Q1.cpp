#include <stdio.h>
#include <stdlib.h>

int main() {
    float x[100], sum = 0.0, ave, a;
    int n = 0, i;
    printf("enter mark:\n");
    scanf("%f", &a);
    x[n] = a;
    while (a > 0.0 && n < 100) {
        sum = sum + a;
        n++;
        scanf("%f", &a);
        x[n] = a;
    }
    ave = sum / n;
    /******/
    printf("output:\n");
    for (i = 0; i < n; i++)
        if (ave > x[i]) printf("%f ", x[i]);

    system("pause");
    return 0;
}
