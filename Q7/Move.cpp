//此文件为 move.cpp

#include "Move.h"

void move(char m[6][7],char ch,int *px,int *py){

 if(ch=='s'){
     if(m[*px+1][*py]!='#'){
             m[*px][*py]=' ';
             (*px)++;
             m[*px][*py]='O';  
        } 
    }

 if(ch=='w'){  
      if(m[*px-1][*py]!='#'){   
             m[*px][*py]=' ';  
             (*px)--; 
             m[*px][*py]='O';   
        } 
    }

 if(ch=='a'){
     if(m[*px][*py-1]!='#'){
         m[*px][*py]=' ';
         (*py)--;
         m[*px][*py]='O';
        }  
    }

 if(ch=='d'){ 
     if(m[*px][*py+1]!='#'){ 
        m[*px][*py]=' ';
        (*py)++;
        m[*px][*py]='O';
        }
    } 
}
    