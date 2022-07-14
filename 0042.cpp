#include <iostream>
#include <boost/multiprecision/cpp_int.hpp>
#include<fstream>
#include<string>

using namespace boost::multiprecision;

bool checkiftriangle(int val)
{
    for (int i = 0; 1; i++)
    {
        if (0.5 * i * (i + 1) == val)
        {
            return 1;
        }
        else if (0.5 * i * (i + 1) > val)
        {
            break;
        }
    }
    return 0;
}

int main() {

    std::fstream newfile;

    newfile.open("p042_words.txt");

    int result = 0;
    char c;
    bool start = 0;
    std::string word = "";

    while (newfile >> c)
    {
        int p = 0;
        if (c == '"')
        {
            p = 1;
            start = 1 - start;
        }
        else word.push_back(c);
        
        if (p == 0) continue;
        if (start == 1)
        {
            word = "";
            continue;
        }

        int val = 0;
        for (int i = 0; i < word.size(); i++)
        {
            val += word[i] - '0' - 16;
        }
        if (checkiftriangle(val))
        {
            result++;
        }

        std::cout << "word = " << word << ", " << "value = " << val << ", result = " << result << std::endl;
    }

 

    return 0;
}