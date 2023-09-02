#include <iostream>

using std::cout;
using std::cin;

int main() 
{
    int digit = 7;
    int result = 0;

    result = (digit * 2) % 9;

    cout << result << "\n";
}