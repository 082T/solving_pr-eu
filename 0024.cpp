#include <iostream>
#include <boost/multiprecision/cpp_int.hpp>
#include <math.h>

using namespace boost::multiprecision;

int factorial(int a)
{
    int b = 1;
    for (int i = 2; i <= a; i++)
        b *= i;
    return b;
}


int main() {

    int aa = 1000000;
    int a = aa - 1;
    int niz[11] = { 0,0,0,0,0,0,0,0,0,0,0 };

    for (int i = 9; i >= 1; i--)
    {
        while (a >= factorial(i))
        {
            a = a - factorial(i);
            niz[i]++;
        }
    }
    

    std::cout << "Permutations needed: ";
    for (int i = 9; i >= 0; i--)
    {
        std::cout << " " << niz[i] << "*" << i << "!";
    }

    std::cout << std::endl << "Done by hand from left to right: 2783915460";

    return 0;
}

