#ifndef STUDENTS_CLASS_H_
#define STUDENTS_CLASS_H_

class Students{
    public:
        char *name;
        char *profileNum;
        char *studentNum;
        char *academy;
        char *major;

        Students *next;
        
        void init();
        void printInfo();

};

#endif