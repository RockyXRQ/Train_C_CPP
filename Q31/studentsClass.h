#ifndef STUDENTS_CLASS_H_
#define STUDENTS_CLASS_H_

class Students{
    public:
        char name[20];
        char profileNum[20];
        char studentNum[20];
        char academy[20];
        char major[20];
        char finDate[20];

        bool isTermFin=false;
        bool isSubChoose=false;

        bool isAllFin();
        void init();

        Students *next;

};

#endif