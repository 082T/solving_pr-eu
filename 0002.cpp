// task 2

#include <iostream>
#include <boost/multiprecision/cpp_int.hpp>

using namespace boost::multiprecision;




int main() {

    cpp_int suma;

    cpp_int i = 1;
    cpp_int j = 2;


    while (i < 4000000 && j < 4000000)
    {
        if (i > j&& i % 2 == 0) suma += i;
        if (j > i&& j % 2 == 0) suma += j;

        if (i < j) i = i + j;
        else j = j + i;
    }
    std::cout << suma;

    return 0;
}
