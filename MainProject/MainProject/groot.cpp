#include <limits>
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
    double userNum = 0;
    double userNumSqrt = 0;

    cout << "Please enter a number: ";
    cin >> userNum;

    while (cin.fail()) {
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        cout << "Bad input! Try again: ";
        cin >> userNum;
    }

    if (userNum < 0) {
        cout << "The number must be non-negative" << endl;
        return 1;
    }

    userNumSqrt = sqrt(userNum);

    cout << "The sqrt is: " << userNumSqrt << endl;

    return 0;
}