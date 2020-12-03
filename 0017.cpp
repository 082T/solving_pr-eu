#include <iostream>
#include <boost/multiprecision/cpp_int.hpp>

using namespace boost::multiprecision;


int broj(int i)
{
    if (i == 1000) return 11;

    if (i >= 100 && i < 1000)
    {
        if (i % 100 == 0) return 7 + broj(i / 100);
        else return 10 + broj(i / 100) + broj(i % 100);
        
    }

    if (i >= 20 && i < 100)
    {
        if (i == 20) return 6;
        else if (i > 20 && i < 30)
        {
            return 6 + broj(i % 10);
        }
        else if (i == 30) return 6;
        else if (i > 30 && i < 40)
        {
            return 6 + broj(i % 10);
        }
        else if (i == 40) return 5;
        else if (i > 40 && i < 50)
        {
            return 5 + broj(i % 10);
        }
        else if (i == 50) return 5;
        else if (i > 50 && i < 60)
        {
            return 5 + broj(i % 10);
        }
        else if (i == 60) return 5;
        else if (i > 60 && i < 70)
        {
            return 5 + broj(i % 10);
        }
        else if (i == 70) return 7;
        else if (i > 70 && i < 80)
        {
            return 7 + broj(i % 10);
        }
        else if (i == 80) return 6;
        else if (i > 80 && i < 90)
        {
            return 6 + broj(i % 10);
        }
        else if (i == 90) return 6;
        else if (i > 90 && i < 100)
        {
            return 6 + broj(i % 10);
        }
    }

    if (i > 0 && i < 10)
    {
        if (i == 1) return 3;
        else if (i == 2) return 3;
        else if (i == 3) return 5;
        else if (i == 4) return 4;
        else if (i == 5) return 4;
        else if (i == 6) return 3;
        else if (i == 7) return 5;
        else if (i == 8) return 5;
        else if (i == 9) return 4;
    }
    if (i >= 10 && i < 20)
    {
        if (i == 10) return 3;
        else if (i == 11) return 6;
        else if (i == 12) return 6;
        else if (i == 13) return 8;
        else if (i == 14) return 8;
        else if (i == 15) return 7;
        else if (i == 16) return 7;
        else if (i == 17) return 9;
        else if (i == 18) return 8;
        else if (i == 19) return 8;
    }
    return 0;
}




int main() {

    
    int suma = 0;

    for (int i = 1; i <= 1000; i++)
    {
        suma += broj(i);
    }


    std::cout << suma;


    return 0;
}