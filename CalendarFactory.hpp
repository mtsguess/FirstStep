#ifndef CALENDARFACTORY_H
#define CALENDARFACTORY_H

#include <memory>
#include "Calendar.hpp"

enum class CalendarType  { Weekly = 0, Quick, Single };

class CalendarFactory
{
    public:
        static std::unique_ptr<Calendar> createCalendar(CalendarType type);
};

#endif //CALENDARFACTORY_H