#include <stdio.h>
#include <stdlib.h>
main() {
    int n = 100;
    /******/
    int a[n], i, j, k, t;
    int min, max;
    for (i = 0; i < n; i++) scanf("%d", &a[i]);  //ÊäÈë
    max = a[0];
    min = a[0];
    /******/
    for (i = 0; i < n; i++) {
        if (a[i] > max)
            max = a[i];
        else if (a[i] < min)
            min = a[i];
    }
    printf("the max is %d\n", max);
    printf("the min is %d\n", min);  //Êä³ö

    system("pause");
    return 0;
}
