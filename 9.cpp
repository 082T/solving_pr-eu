#include <iostream>
#include <boost/multiprecision/cpp_int.hpp>


using namespace boost::multiprecision;





int main() {

    
    for (int i = 1; i < 1000; i++)
    {
        for (int j = i; j < 1000; j++)
        {
            for (int k = j; k < 1000; k++)
            {
                if (((k * k) == (j * j + i * i)) && i + j + k == 1000)
                {
                    std::cout << i * j * k;
                }
            }
        }
    }


    return 0;
}