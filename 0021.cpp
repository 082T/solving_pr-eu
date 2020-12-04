#include <iostream>
#include <boost/multiprecision/cpp_int.hpp>
#include <vector>
using namespace boost::multiprecision;




int d(int a)
{
    int suma = 0;
    for (int i = 1; i < a; i++)
    {
        if (a % i == 0) suma += i;
    }

    return suma;
}



int main() {

    
    cpp_int count = 0;

    std::vector<int> svid;
    

    for (int i = 0; i < 10000; i++)
    {
        svid.push_back(d(i));
    }
    
    for (int i = 1; i < 10000; i++)
    {
        int ima = 0;
        for (int j = 1; j < 10000; j++)
        {
            if (i == j) continue;

            if (svid[i] == j && svid[j] == i)
            {
                ima = 1;
                break;
            }
        }
        if (ima == 1) count += i;
    }

    std::cout << count;
    


    return 0;
}