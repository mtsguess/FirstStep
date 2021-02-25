#include <iostream>
#include <memory>
#include <vector>

#include "BaseExample.hpp"
#include "Base.hpp"
#include "FromBase1.hpp"
#include "FromBase2.hpp"


void BaseExample::do_Example()
{

    int i = 4;
    int j = 17;
    std::cout << "Hello Mati" << i*j << std::endl; 

    std::vector<std::unique_ptr<Base>> _collection{};

    _collection.push_back(std::make_unique<FromBase1>());
    _collection.push_back(std::make_unique<FromBase2>());
  
    for(auto& item: _collection)
    {
        item->NextDate();
    }
    
    std::cout << std::endl; 

    return;
}