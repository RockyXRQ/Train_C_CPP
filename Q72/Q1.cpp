#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float round1(float x, int n) {
    float z;
    long i;
    i = pow(10, n-1);
    z = (long) (x * i + 0.5) / (float) i;
    return z;
}
int main() {
    float x, y;
    int n;
    printf("input x n\n");
    scanf("%f%d", &x, &n);
    y = round1(x, n);
    printf("x=%f,  round1(%f)=%f\n", x, x, y);
    system("pause");
    return 0;
}
