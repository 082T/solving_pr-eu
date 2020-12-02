#include <iostream>
#include <boost/multiprecision/cpp_int.hpp>

using namespace boost::multiprecision;


void routes(int a, int b, int c, int d, cpp_int& t)
{
    
    

    if (a == c && b == d) return;

    else if (a == c && b != d)
    {
        routes(a, b, c, d + 1, t);
    }
    else if (a != c && b == d)
    {
        routes(a, b, c + 1, d, t);
    }
    else
    {
        t = t + 1;
        routes(a, b, c, d + 1, t);
        routes(a, b, c + 1, d, t);
    }

    return;
}


cpp_int countroutes(int a, int b)
{
    cpp_int t = 1;

    routes(a,b,0,0,t);

    return t;

}


int main() {


    cpp_int a=0;


    a += countroutes(10, 20) * countroutes(10, 0);

    for (int i = 1; i <=20; i++)
    {
        cpp_int s = countroutes(10, 20 - i);
        a += s * countroutes(10, i) - s * countroutes(10, i - 1);
    }

    std::cout << a << std::endl;

    return 0;
}