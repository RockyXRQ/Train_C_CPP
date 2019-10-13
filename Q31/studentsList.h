#ifndef STUDENTS_LIST_H_
#define STUDENTS_LIST_H_

#include "studentsClass.h"

class StudentsList{
    public:
        Students *head;
        int listLen=0;

        StudentsList();
  
        void clearList();
        void listPrintByName(char *name);
        void listTraverse();
        
        bool isListEmpty();
        bool listInsertTail();
        bool listSearchByName();  
};

#endif