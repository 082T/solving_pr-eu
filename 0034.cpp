#include <iostream>
#include <boost/multiprecision/cpp_int.hpp>
#include <math.h>

using namespace boost::multiprecision;



cpp_int fakt(cpp_int a)
{
    cpp_int rez = 1;
    for (cpp_int i = 2; i <= a; i++)
    {
        rez *= i;
    }

    return rez;
}

cpp_int digitfact(cpp_int a)
{
    cpp_int suma = 0;

    while (a > 0)
    {
        suma += fakt(a % 10);
        a /= 10;
    }

    return suma;
}



int main() {

    cpp_int suma = 0;
    for (cpp_int a = 10; a < 3000000; a++)
    {
        if (a == digitfact(a))
        {
            suma += a;
        }
        if (a % 100000 == 0) std::cout << a << std::endl;
    }
    std::cout << suma;
    
    return 0;
}

