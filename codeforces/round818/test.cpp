#include <bits/stdc++.h>

int main (int argc, char *argv[])
{
    try
    {
        int a;
        std::cin >> a;
        if(a == -1)
            throw "a cannot be -1";
        std::cout << "No exceptions"<<std::endl;
    }
    catch (const char *msg)
    {
        std::cout << "Exception found!"<<std::endl;
        std::cout << msg<<std::endl;
    } 
    std::cout << "Out of try/catch block" << std::endl;
    return 0;
}
