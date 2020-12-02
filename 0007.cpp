#include <iostream>
#include <boost/multiprecision/cpp_int.hpp>

using namespace boost::multiprecision;

int isprime(cpp_int a)
{
    for (cpp_int t = 2; t*t <= a; t++)
    {
        if ((a % t) == 0) 
        {
            return 0;
        }
    }
    return 1;
}



int main() {

    int count = 0;
    cpp_int j;

    for (j = 2; 1; j++)
    {
        if (isprime(j)==1) count++;
        if (count == 10001) break;
    }
    std::cout << j;


    return 0;
}
