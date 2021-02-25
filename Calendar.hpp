#ifndef CALENDAR_H
#define CALENDAR_H

#include <vector>
#include <memory>

#include "DateTime.hpp"

class Calendar
{
    public:
        virtual std::vector<std::shared_ptr<Calendar>> getEventsBetween(DateTime start, DateTime end) = 0;
    
    protected:
        DateTime _startTime;
        DateTime _estimatedEndTime;
     
};

#endif // CALENDAR_H