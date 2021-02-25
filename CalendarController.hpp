#ifndef CALENDARCONTROLLER_H
#define CALENDARCONTROLLER_H

#include <vector>
#include <memory>

#include "DateTime.hpp"
#include "Calendar.hpp"


class CalendarController
{
    public:
       std::vector<std::shared_ptr<Calendar>> getEvents(DateTime start, int countDays); 

    private:
        std::vector<std::unique_ptr<Calendar>> _calendars{};
};

#endif // CALENDARCONTROLLER_H