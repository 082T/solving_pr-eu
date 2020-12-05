#include <iostream>
#include <boost/multiprecision/cpp_int.hpp>


using namespace boost::multiprecision;


int countnum(cpp_int a)
{
    int i = 0;
    while (a > 0)
    {
        i++;
        a /= 10;
    }
    return i;
}


int d(cpp_int i)
{
    cpp_int t = 0;
    
    for (int j = 1; 1; j++)
    {
        t += countnum(j);

        if (t >= i)
        {
            while (t != i)
            {
                t--;
                j = j / 10;
            }
            return j % 10;
        }

    }

    
}


int main() {

    int suma = 1;

    
    for (cpp_int i = 1; i <= 1000000; i = i * 10)
    {
        suma *= d(i);
    }

    std::cout << suma;


    return 0;
}