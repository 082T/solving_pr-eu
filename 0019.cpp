#include <iostream>
#include <boost/multiprecision/cpp_int.hpp>

using namespace boost::multiprecision;




int main() {



    int day = 1;
    int month = 1;
    int dayinmonth = 0;
    int year = 1901;
    int total = 0;

    while(year!=2001)
    {
        day++;
        dayinmonth++;

        if (day == 8) day = 1;

        if ((month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) && dayinmonth == 32)
        {
            month++;
            dayinmonth = 1;
        }
        else if ((month == 4 || month == 6 || month == 9 || month == 11) && dayinmonth == 31)
        {
            dayinmonth = 1;
            month++;
        }
        else if (month == 2 && year % 4 == 0 && dayinmonth == 30)
        {
            dayinmonth = 1;
            month++;
        }
        else if (month == 2 && year % 4 != 0 && dayinmonth == 29)
        {
            dayinmonth = 1;
            month++;
        }


        if (month == 13) year++;
        if (month == 13) month = 1;

        if (day == 7 && dayinmonth == 1)
        {
            total++;  
        }

    }


    std::cout << total << std::endl;



    return 0;
}