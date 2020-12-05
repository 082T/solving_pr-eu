#include <iostream>
#include <boost/multiprecision/cpp_int.hpp>
#include <vector>
#include <string>

using namespace boost::multiprecision;



cpp_int addtosum(int a)
{
    cpp_int pot = 1;

    for (int i = 1; i <= a; i++)
    {
        pot *= a;

        pot = pot % 10000000000;
    }

    return pot;

}


int main() {

    cpp_int suma = 0;

    for (int i = 1; i <= 1000; i++)
    {
        suma += addtosum(i);
    }

    std::cout << suma % 10000000000;

    return 0;
}