#include <iostream>
#include <boost/multiprecision/cpp_int.hpp>

using namespace boost::multiprecision;


cpp_int fakt(cpp_int a)
{
    
    for (cpp_int i = a - 1; i > 1; i--)
    {
        a *= i;
    }

    return a;
}



int main() {

    cpp_int t = fakt(100);

    cpp_int suma = 0;
    while (t > 0)
    {
        suma = suma + t % 10;
        t /= 10;
    }
    std::cout << suma;


    return 0;
}