#include "RT_Triangle.h"

RT_Triangle::RT_Triangle() {
    printf("����������ֱ�Ǳ�a��b��ֵ�����Կո������");
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