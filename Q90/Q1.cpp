#include <iostream>
#include <cstdlib>

template <typename AnyType>
void Swap(AnyType &a, AnyType &b);

int main() {
    int a = 1;
    int b = 2;
    double c = 3;
    double d = 4;
    Swap(a, b);
    Swap(c, d);
    std::cout << a << b << c << d << std::endl;
    system("pause");
    return 0;
}

template <typename AnyType>
void Swap(AnyType &a, AnyType &b) {
    AnyType temp = a;
    a = b;
    b = temp;
}