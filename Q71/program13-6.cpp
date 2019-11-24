#include <stdio.h>
#include <stdlib.h>

struct students {
    int subjectA = 0;
    int subjectB = 0;
    int subjectC = 0;
    int subjectD = 0;
    int subjectE = 0;
    int subjectF = 0;
    int subjectG = 0;
    int subjectH = 0;
    int subjectI = 0;
    int subjectJ = 0;

    int average = 0;
};

int main() {
    register int count = 0;
    struct students numList[100];

    while (count < 80 &&
           scanf("%d%d%d%d%d%d%d%d%d%d", &numList[count].subjectA,
                 &numList[count].subjectB, &numList[count].subjectC,
                 &numList[count].subjectD, &numList[count].subjectE,
                 &numList[count].subjectF, &numList[count].subjectG,
                 &numList[count].subjectH, &numList[count].subjectI,
                 &numList[count].subjectJ)) {
        ++count;
    }

    register int tempTarget = 0;
    register int tempMin = __INT_MAX__;
    
    for (int targetA = 0; targetA < count; ++targetA) {
        for (int targetB = 0; targetB < count; ++targetB) {
            if (numList[targetB].average < tempMin) {
                tempMin = numList[targetB].average;
                tempTarget = targetB;
            }
        }
        tempMin = __INT_MAX__;
        printf("%d %d %d %d %d %d %d %d %d %d %d\n",
               numList[tempTarget].subjectA, numList[tempTarget].subjectB,
               numList[tempTarget].subjectC, numList[tempTarget].subjectD,
               numList[tempTarget].subjectE, numList[tempTarget].subjectF,
               numList[tempTarget].subjectG, numList[tempTarget].subjectH,
               numList[tempTarget].subjectI, numList[tempTarget].subjectJ,
               numList[tempTarget].average);
        numList[tempTarget].average = __INT_MAX__;
    }


    system("pause");
    return 0;
}