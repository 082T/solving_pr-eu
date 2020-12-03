#include <iostream>
#include <boost/multiprecision/cpp_int.hpp>

using namespace boost::multiprecision;


cpp_int countnum(cpp_int a)
{
    int i = 0;
    while (a > 0)
    {
        a /= 10;
        i++;
    }
    return i;
}


int main() {

    cpp_int a, b;
    int index = 2;
   
    a = 1;
    b = 1;
    
    while (1)
    {
        if (a < b) a = a + b;
        else b = a + b;
        index++;
        if (countnum(a) == 1000 || countnum(b) == 1000) break;
    }

    std::cout << index;

    return 0;
}