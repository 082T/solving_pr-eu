// task 3

#include <iostream>
#include <boost/multiprecision/cpp_int.hpp>

using namespace boost::multiprecision;


int isprime(cpp_int number)
{
    for (cpp_int i = 2; i < number; i++)
    {
        if (number % i == 0) return 0;
    }

    return 1;
}




int main() {

    cpp_int t = 600851475143;
    cpp_int pamti = 0;

    for (cpp_int a = 2; a <= t; a++)
    {
        if (isprime(a) && t % a == 0)
        {
            t = t / a;
            pamti = a;
        }
    }

    std::cout << pamti;

    return 0;
}