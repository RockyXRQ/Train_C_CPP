#include <iostream>
#include <cstdlib>
#include "HelloWorld.h"
int main() {
    using std::cout;
    using std::endl;

    HelloWorld hello1{"XRQ"};
    hello1.HelloWolrdEng();
    cout << hello1 + " XPP" << endl;
    system("pause");
    return 0;
}