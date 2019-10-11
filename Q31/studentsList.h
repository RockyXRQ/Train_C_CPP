#ifdef STUDENTS_LIST_H_
#define STUDENTS_LIST_H_

#include "studentsClass.h"

class StudentsList{
    public:
        Students *head;
        int listLen;

        StudentsList();

        void clearList();
        void listPrintByName(char *name);
        void listTraverse();
        
        bool isListEmpty();
        bool listInsertTail(Students *students);
        bool listSearchByName(char *name);
        bool ListDeleteByName(char *name,Students *students);   
};

#endif