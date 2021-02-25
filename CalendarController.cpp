#include "CalendarController.hpp"

std::vector<std::shared_ptr<Calendar>> CalendarController::getEvents(DateTime start, int countDays)
{
    std::vector<std::shared_ptr<Calendar>> collection{};

    DateTime end = start.addDays(countDays);
    for(auto& calendarItem : _calendars) 
    {
        auto subCollection = calendarItem->getEventsBetween(start, end);
        collection.insert(collection.end(), subCollection.begin(), subCollection.end());
    }

    return collection;
}
