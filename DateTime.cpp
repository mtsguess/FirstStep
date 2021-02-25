#include "DateTime.hpp"
#include <ctime>


DateTime DateTime::UtcNow()
{
    DateTime dateTime{};

    time_t ttime = time(0);
    tm *gmt_time = gmtime(&ttime);
    
    dateTime.fillTimeDate(gmt_time);
    return dateTime;
}

DateTime DateTime::LocalNow()
{
    DateTime dateTime{};

    time_t ttime = time(0);
    tm *local_time = localtime(&ttime);
   
    dateTime.fillTimeDate(local_time);
    return dateTime;
}

Weekday DateTime::getWeekday()
{
    return _weekday;
}

DateTime DateTime::addDays(int offsetDays)
{
    DateTime dt{};

    struct tm today = { _second, _minute, _hour,  _day, _month - 1, _year - 1900 }; 
    time_t t1 = mktime(&today);
    
    int secondsPerDay = 86400;
    time_t offset = secondsPerDay * offsetDays; 
    time_t t2 = t1 + offset;

    struct tm *next = localtime(&t2);  
    dt.fillTimeDate(next);

    return dt;  
}

long DateTime::getSecondsFrom1900() 
{
    struct tm today = { _second, _minute, _hour,  _day, _month - 1, _year - 1900 }; 
    time_t t1 = mktime(&today);
    return (long)t1;
}

std::ostream& DateTime::print(std::ostream& os)
{
     return os << "Date: " << _day << "." << _month << "." << _year << " Time: " << _hour << "." << _minute << "." << _second << std::endl;
}


void DateTime::fillTimeDate(tm *time)
{
    _year = 1900 + time->tm_year;
    _month = 1 + time->tm_mon;
    _day = time->tm_mday;

    _hour = time->tm_hour;
    _minute = time->tm_min;
    _second = time->tm_sec;

    _weekday = static_cast<Weekday>(time->tm_wday);
}


