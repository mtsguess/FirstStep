#ifndef QUICKSTART_H
#define QUICKSTART_H

#include <vector>
#include <memory>

#include "Calendar.hpp"

class QuickStart: public Calendar
{
    public:
        std::vector<std::shared_ptr<Calendar>> getEventsBetween(DateTime start, DateTime end) override;
};

#endif //QUICKSTART_H