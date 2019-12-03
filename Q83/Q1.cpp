#include <iostream>
#include <cstdlib>
#include <vector>
#include <array>

int main() {
    std::vector<int> arr1(3);
    arr1[0] = 1;
    arr1[1] = 2;
    arr1[2] = 3;

    std::array<double, 3> arr2 = {1.1, 2.1, 3.1};

    float arr3[3] = {2.2, 3.3, 4.4};

    std::cout << arr1[0] << std::endl;
    std::cout << arr2[0] << std::endl;
    std::cout << arr3[0] << std::endl;

    system("pause");
    return 0;
}