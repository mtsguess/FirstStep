#include <memory>
#include "CalendarFactory.hpp"
#include "QuickStart.hpp"
#include "WeeklyStart.hpp"
#include "Calendar.hpp"

std::unique_ptr<Calendar> CalendarFactory::createCalendar(CalendarType type)
{
    switch (type)
    {
        case CalendarType::Weekly:
        {
            return std::make_unique<WeeklyStart>();
        }

        case CalendarType::Quick:
        {
            return std::make_unique<QuickStart>();
        }
        
        //default:
        //{
        //    // must throw an Exception
        //}
    }
}
