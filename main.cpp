#include <iostream>

#include "BaseExample.hpp"
#include "DateTime.hpp"


int main()
{
    std::cout << "Hello World,main.cpp" << std::endl; 
    BaseExample::do_Example();

    // DateTime
    DateTime dateTimeUtcNow = DateTime::UtcNow();
    std::cout << "utc: ";
    dateTimeUtcNow.print(std::cout);

    DateTime dateTimeLocalNow = DateTime::LocalNow();
    std::cout << "local: ";
    dateTimeLocalNow.print(std::cout); 
    Weekday weekday = dateTimeLocalNow.getWeekday();
    
    DateTime dateTimeLocalNext =  dateTimeLocalNow.addDays(7);
    std::cout << "add 7 days: ";
    dateTimeLocalNext.print(std::cout); 
    
    if(dateTimeLocalNext > dateTimeLocalNow)
    {
        std::cout << "after >: dateTimeLocalNext greater than dateTimeLocalNow" << std::endl; 
    }

    return 0;
}