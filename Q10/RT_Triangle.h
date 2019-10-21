#ifndef _TRIANGLE_H_
#define _TRIANGLE_H_

#pragma once

#include "Include_List.h"
#include "math.h"

class RT_Triangle {
   public:
    RT_Triangle();
    float GetArea();
    float Geta();
    float Getb();
    float Getc();

   private:
    float a;
    float b;
    float c;
};

#endif