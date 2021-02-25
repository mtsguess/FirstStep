#ifndef WEEKLYSTART_H
#define WEEKLYSTART_H

#include "Calendar.hpp"

class WeeklyStart: public Calendar
{
    public:
        std::vector<std::shared_ptr<Calendar>> getEventsBetween(DateTime start, DateTime end) override;
};

#endif //WEEKLYSTART_H