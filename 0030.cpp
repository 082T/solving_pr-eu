#include <iostream>
#include <boost/multiprecision/cpp_int.hpp>


using namespace boost::multiprecision;


cpp_int suma(cpp_int i)
{
    cpp_int sum = 0;
    while (i > 0)
    {
        cpp_int t = i % 10;
        sum += t * t * t * t * t;
        i /= 10;
    }
    return sum;
}


int main() {

    cpp_int count = 0;

    for (cpp_int i = 2; i < 1000000; i++)
    {
        if (i == suma(i)) count += i;
    }

    std::cout << count;

    return 0;
}