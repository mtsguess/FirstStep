#ifndef FROMBASE2_H
#define FROMBASE2_H

#include <iostream>
#include "Base.hpp"

class FromBase2: public Base
{
    public:
        void NextDate() override { std::cout << "I'm FromBase2 " << j << std::endl; }
        int j = 17;
};

#endif