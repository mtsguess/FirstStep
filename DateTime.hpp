#ifndef DATETIME_H
#define DATETIME_H

#include <iostream>

enum class Weekday { Sunday = 0, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday };

// Example class for date / time handling
// should be replaced by the standard chrono lib or a boost lib (or qt lib)  
class DateTime
{
    public:

        DateTime(): _year {0}, 
                    _month {0},
                    _day {0},
                    _hour {0},
                    _minute {0},
                    _second {0},
                    _weekday {Weekday::Sunday} {}

        static DateTime UtcNow();
        static DateTime LocalNow();

        Weekday getWeekday();
        long getSecondsFrom1900();
        DateTime addDays(int offsetDays);
        
        std::ostream& print(std::ostream& os);
        bool operator >(DateTime& dt)  {return getSecondsFrom1900() > dt.getSecondsFrom1900();}
        bool operator >=(DateTime& dt)  {return getSecondsFrom1900() >= dt.getSecondsFrom1900();}
        bool operator <(DateTime& dt)  {return getSecondsFrom1900() < dt.getSecondsFrom1900();}
        bool operator <=(DateTime& dt)  {return getSecondsFrom1900() <= dt.getSecondsFrom1900();}


    private: 
        int _year;
        int _month;
        int _day;

        int _hour;
        int _minute;
        int _second;

        Weekday _weekday;

        void fillTimeDate(tm *time);
};



#endif // DATETIME_H