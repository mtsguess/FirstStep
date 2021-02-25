#include <vector>
#include <memory>

#include "QuickStart.hpp"
#include "DateTime.hpp"

std::vector<std::shared_ptr<Calendar>> QuickStart::getEventsBetween(DateTime start, DateTime end)
{
    std::vector<std::shared_ptr<Calendar>> collection{};

    if(_startTime >= start && _startTime <= end)
    {
        collection.push_back(std::shared_ptr<Calendar>(this));
    }
    
    return collection;
}

