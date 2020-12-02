#include <iostream>
#include <boost/multiprecision/cpp_int.hpp>

using namespace boost::multiprecision;


int isprime(cpp_int number)
{
    for (cpp_int i = 2; i*i <= number; i++)
    {
        if (number % i == 0) return 0;
    }

    return 1;
}



int main() {

    cpp_int sum = 0;

    for (cpp_int i = 2; i < 2000000; i++)
    {
        if (isprime(i)) sum += i;
    }
    std::cout << sum;


    return 0;
}