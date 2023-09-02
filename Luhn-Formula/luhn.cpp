#include <iostream>

using std::cout;
using std::cin;

int doubleDigitValue(int number);

int main ()
{
    char digit;
    int oddLengthChecksum = 0;
    int evenLengthChecksum = 0;
    int position = 1;

    cout << "Enter a credit card number: ";
    digit = cin.get();

    while (digit != 10)
    {
        if (position % 2 == 0)
        {
            oddLengthChecksum += (digit - '0');
            evenLengthChecksum += doubleDigitValue(digit - '0');
        }
        else
        {
            oddLengthChecksum += doubleDigitValue(digit - '0');
            evenLengthChecksum += (digit - '0');
        }
        digit = cin.get();
        position++;
    }
    
    if (position % 2 == 0)
    {
        cout << "Is a valid number " << std::endl;
    }
    else
    {
        cout << "Is not a valid number " << std::endl;
    }
}

int doubleDigitValue(int number)
{
    int doubledNumber = number * 2;
    int sum;

    if (doubledNumber >= 10)
    {
        sum = 1 + doubledNumber % 10;
    }
    else
    {
        sum = doubledNumber;
    }
    return sum;
}