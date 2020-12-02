// task 1

#include<iostream>
#include <boost/multiprecision/cpp_int.hpp>

using namespace boost::multiprecision;




int main() {
    
    cpp_int suma = 0;


    for (int i = 1; i < 1000; i++)
    {
        if (i % 3 == 0 || i % 5 == 0)
            suma += i;
    }

    std::cout << suma;

    return 0;
}
