#include <vector>
#include <memory>

#include "WeeklyStart.hpp"
#include "DateTime.hpp"

std::vector<std::shared_ptr<Calendar>> WeeklyStart::getEventsBetween(DateTime start, DateTime end)
{
    std::vector<std::shared_ptr<Calendar>> collection{};

    // find weekday in next week in given timespan
    DateTime dt = start;
 /*  while(dt <= end)
    {
        if(dt.getWeekday() == _weekday)
        {
            collection.push_back(std::shared_ptr<Calendar>(this));
        }
        dt = dt.addDays(1);
    }
  */  
    return collection;
}
