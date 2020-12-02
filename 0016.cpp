#include <iostream>
#include <boost/multiprecision/cpp_int.hpp>

using namespace boost::multiprecision;


cpp_int count(cpp_int a)
{
    cpp_int suma = 0;

    while (a > 0)
    {
        suma += a % 10;
        a = a / 10;
    }
    return suma;
}


int main() {

    cpp_int a = 1;
   
    for (int i = 1; i <= 1000; i++)
    {
        a = a * 2;
    }

    std::cout << count(a);

    return 0;
}