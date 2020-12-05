#include <iostream>
#include <boost/multiprecision/cpp_int.hpp>


using namespace boost::multiprecision;



void countways(int a, int min, cpp_int *t)
{
    if (a < 0) return;
    if (a == 0) {
        *t = *t + 1;
        return;
    }

    for (int i = 1; i <= a; i++)
    {
        if (i < min) continue;
        countways(a - i, i, t);
    }

}





int main() {

    cpp_int t = 0;
    countways(100, 1, &t);
    t--;

    std::cout << t;

    return 0;
}