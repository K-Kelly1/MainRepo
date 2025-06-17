#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    double userNum = 0;
    double userNumSqrt = 0;

    cout << "Please enter a number: ";
    cin >> userNum;

    if (userNum <= 0)
    {
        cout << "The number must be positive" << endl;
        return 0;
    }

    userNumSqrt = std::sqrt(userNum);

    cout << "The sqrt is: " << userNumSqrt << endl;

    return 0;
}