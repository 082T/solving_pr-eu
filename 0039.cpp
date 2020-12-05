#include <iostream>
#include <boost/multiprecision/cpp_int.hpp>


using namespace boost::multiprecision;



int solutionnum(int i)
{
    int count = 0;
    for (int a = 1; a < i; a++)
    {
        for (int b = a; b < i; b++)
        {
            int c = i - a - b;
            if (c <= 0) break;
            if (c * c == a * a + b * b) count++;
        }
    }
    return count;
}



int main() {

    int max = 0;
    int pamti = 0;

    for (int i = 1; i <= 1000; i++)
    {
        int a = solutionnum(i);
        if (max < a)
        {
            max = a;
            pamti = i;
        }
    }

    std::cout << pamti;

    return 0;
}