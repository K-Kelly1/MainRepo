#include <cmath>
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
    double userNum = 0;
    double userNumSqrt = 0;

    cout << "Please enter a number: ";
    cin >> userNum;

    if (userNum < 0) {
        cout << "The number must be not-negative" << endl;
        return 0;
    }

    userNumSqrt = sqrt(userNum);

    cout << "The sqrt is: " << userNumSqrt << endl;

    return 1;
}