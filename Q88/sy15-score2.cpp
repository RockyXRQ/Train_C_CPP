#include <stdio.h>
#include <stdlib.h>

struct Stu {
    float pointA;
    float pointB;
    float pointC;
} tempStu;

int main() {
    FILE* stuInfo = fopen("stuInfo.txt", "r");
    FILE* stud = fopen("stud.dat", "a");
    for (register int counter = 0; counter < 5; ++counter) {
        fscanf(stuInfo, "%f%f%f", &tempStu.pointA, &tempStu.pointB,
               &tempStu.pointC);
        fprintf(stud, "%f\n",
                (tempStu.pointA + tempStu.pointB + tempStu.pointC) / 3);
    }
    system("pause");
    return 0;
}
