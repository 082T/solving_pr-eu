#include <iostream>
#include <boost/multiprecision/cpp_int.hpp>

using namespace boost::multiprecision;


cpp_int sequence(cpp_int i)
{
    cpp_int iteracija = 1;

    while (i != 1)
    {
        iteracija++;
        if (i % 2 == 0) i = i / 2;
        else i = 3 * i + 1;
    }

    return iteracija;
}


int main() {

    cpp_int max = 0;
    cpp_int pamti = 0;

    for (cpp_int i = 2; i < 1000000; i++)
    {
        cpp_int seq = sequence(i);

        if (max < seq)
        {
            max = seq;
            pamti = i;
        }
        
    }

    std::cout << "sequence length: " << max << ", for i = " << pamti << std::endl;



    return 0;
}