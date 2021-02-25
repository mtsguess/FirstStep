#ifndef FROMBASE1_H
#define FROMBASE1_H

#include <iostream>
#include "Base.hpp"

class FromBase1: public Base
{
    public:
        void NextDate() override { std::cout << "I'm FromBase1 " << i << std::endl; }
        int i = 4;
};

#endif