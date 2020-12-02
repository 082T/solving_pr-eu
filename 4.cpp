#include <iostream>
#include <boost/multiprecision/cpp_int.hpp>

using namespace boost::multiprecision;


int ispalindrome(int a)
{
    int reverse = 0;
    int copya = a;

    while (copya > 0)
    {
        reverse = reverse * 10;
        reverse = reverse + (copya % 10);
        copya /= 10;
    }
    if (reverse == a) return 1; 
    else return 0;
}



int main() {

    int max = 0;

    for (int i = 100; i <= 999; i++)
    {
        for (int j = i; j <= 999; j++)
        {
            if (ispalindrome(i * j) && (i * j > max)) max = i * j;
        }
    }
    std::cout << max;


    return 0;
}