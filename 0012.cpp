#include <iostream>
#include <boost/multiprecision/cpp_int.hpp>

using namespace boost::multiprecision;


int numofdiv(cpp_int a)
{
    int count=1;

    for (cpp_int i = 2; i <= a; i++)
    {
        int count2 = 0;
        while (a % i == 0)
        {
            count2++;
            a = a / i;
        }
        count = count * (count2 + 1);
    }

    return count;
}


int main() {

    int test = 0;
    
    for (int i = 1; 1; i++)
    {
        test += i;
        
        if (numofdiv(test) > 500) break;
    }
    std::cout << test;
    

    return 0;
}