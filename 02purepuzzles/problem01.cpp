#include <iostream>

int main ()
{
    for (int i = 1; i < 8; i++)
    {
        for (int j = 0; j < 4 - abs(4 - i); j++)
        {
            std::cout << "#";
        }
        std::cout << std::endl;
    }
}