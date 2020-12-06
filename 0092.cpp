#include <iostream>
#include <boost/multiprecision/cpp_int.hpp>
#include <math.h>

using namespace boost::multiprecision;
// will take up to 20min


cpp_int sumaznam(cpp_int i)
{
    cpp_int suma = 0;
    while (i > 0)
    {
        suma += ((i % 10) * (i % 10));
        i /= 10;
    }
    return suma;
}


int main() {

    cpp_int count = 0;

    
    for (cpp_int i = 1; i <= 10000000; i++)
    {
        cpp_int ii = i;

        while (ii != 1 && ii != 89)
        {
            ii = sumaznam(ii);
        }
        if (i % 100000 == 0) std::cout << i << std::endl;
        if (ii == 89) count++;
    }

    std::cout << count;

    return 0;
}

