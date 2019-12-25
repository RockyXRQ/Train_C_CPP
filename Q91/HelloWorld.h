#pragma once
#ifndef HELLO_WORLD_H_
#define HEELO_WORLD_H_
#include <string>

class HelloWorld {
   private:
    std::string myName;

   public:
    explicit HelloWorld(const std::string&);
    ~HelloWorld();

    void HelloWolrdEng() const;
    std::string operator+(const std::string) const;
};

#endif