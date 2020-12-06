#include <iostream>
#include <boost/multiprecision/cpp_int.hpp>
#include <math.h>

using namespace boost::multiprecision;


int tocno(cpp_int i)
{
    if (i % 10 != 0) return 0;
    i = i / 100;
    if (i % 10 != 9) return 0;
    i = i / 100;
    if (i % 10 != 8) return 0;
    i = i / 100;
    if (i % 10 != 7) return 0;
    i = i / 100;
    if (i % 10 != 6) return 0;
    i = i / 100;
    if (i % 10 != 5) return 0;
    i = i / 100;
    if (i % 10 != 4) return 0;
    i = i / 100;
    if (i % 10 != 3) return 0;
    i = i / 100;
    if (i % 10 != 2) return 0;
    i = i / 100;
    if (i % 10 != 1) return 0;
    if (i > 1) return 0;
        
    return 1;
}


int main() {

    
    cpp_int i;

    i = 1000000030;
    while (1)
    {
        if (tocno(i*i)) break;
        if (i % 100 == 30) i += 40;
        else i += 60;
    }

    std::cout << i;
    
    return 0;
}

