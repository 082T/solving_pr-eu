#include <iostream>
#include <boost/multiprecision/cpp_int.hpp>

using namespace boost::multiprecision;





int main() {

    int a;


    for (a = 1; 1; a++)
    {
        int good = 1;
        for (int i = 1; i <= 19; i++)
        {
            if (a % i != 0)
            {
                good = 0;
                break;
            }
        }
        if (good == 1)
            break;
    }
    std::cout << a;


    return 0;
}