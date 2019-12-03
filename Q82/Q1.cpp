#include <iostream>
#include <typeinfo>
#include <cstdlib>

struct Year {
    int year = 0;
};

int main() {
    Year arr2[3];
    Year** arr1 = new Year*[3];
    for (register int i = 0; i < 3; ++i) {
        arr1[i] = new Year;
    }

    Year** p1 = arr1;
    Year* p2 = arr2;
    std::cout << (*p1)->year << std::endl;
    std::cout << (*p2).year << std::endl;

    system("pause");
    return 0;
}