#include <cmath>
#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main() {
    double userInputAsNum = 0;
    double userNumSqrt = 0;
    string userInput = "";
    size_t firstNotNumericIndex = 0;

    cout << "Please enter a number: ";
    cin >> userInput;
    
    try {
        userInputAsNum = stod(userInput, &firstNotNumericIndex);
    } catch (...) {
        cout << "Not a number! bye" << endl;
        return 1;
    }

    if (firstNotNumericIndex != userInput.length()) {
        cout << "Not a number! bye 1" << endl;
        return 1;
    }

     if (userInputAsNum < 0) {
        cout << "The number must be non-negative" << endl;
        return 1;
    }

    userNumSqrt = sqrt(userInputAsNum);

    cout << "The sqrt is: " << userNumSqrt << endl;

    return 0;
}