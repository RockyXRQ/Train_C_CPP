#include "RT_Triangle.h"

RT_Triangle::RT_Triangle() {
    printf("请依次输入直角边a和b的值，并以空格隔开：");
    scanf("%f%f", &a, &b);
}

float RT_Triangle::GetArea() { 
    return a * b * 0.5; 
}

float RT_Triangle::Geta() { 
    return a;
}

float RT_Triangle::Getb() { 
    return b; 
}

float RT_Triangle::Getc() {
    c = sqrt(pow(a, 2) + pow(b, 2));
    return c;
}