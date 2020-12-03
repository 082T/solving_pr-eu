#include <iostream>
#include <boost/multiprecision/cpp_int.hpp>
#include <vector>
using namespace boost::multiprecision;




int cycle(int i)
{
    int a = 1;
    
    std::vector<int> vektor;
    std::vector<int>::iterator i1;

    std::vector<int> vektor2;
    std::vector<int>::iterator i2;

    while (a > 0)
    {
        int k = -1;
        a = a * 10;
        if (a % i == 0) return 0;

        int c = a / i;
        int d = a % i;

        i2 = vektor2.begin();
        for (i1 = vektor.begin(); i1 != vektor.end(); i1++)
        {
            k++;
            if (c == (*i1) && (*i2) == d) return vektor.size() - k;
            i2++;
        }
        
        
        vektor.push_back(c);    
        vektor2.push_back(d);

        a = a % i;
    }

    return 1;
}



int main() {

    
    int max = 0;
    int pamti = 0;
    int pamticyc = 0;

   
    
    for (int i = 2; i < 1000; i++)
    {
        
        int a = cycle(i);

        std::cout << i << " " << a << std::endl;

        if (a > max)
        {
            max = a;
            pamti = i;
            pamticyc = a;
        }
    }
    
    std::cout << std::endl << pamti << " " << pamticyc << std::endl;
    
    return 0;
}