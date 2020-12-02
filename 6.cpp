#include <iostream>
#include <boost/multiprecision/cpp_int.hpp>

using namespace boost::multiprecision;





int main() {

    int suma1=0;
    
    for (int i = 1; i <= 100; i++)
    {
        suma1 += i * i;
    }
    
    int suma2 = 0;

    for (int i = 1; i <= 100; i++)
    {
        suma2 += i;
    }
    suma2 = suma2 * suma2;

    std::cout << suma2 - suma1;

    return 0;
}