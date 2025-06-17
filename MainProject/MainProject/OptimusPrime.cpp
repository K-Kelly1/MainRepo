#include <cmath>
#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;

// Gets input from user and check this is an int
int getInputFromUser(int* userInputAsNum) {
    string userInput;
    size_t firstNotNumericIndex;

    cout << "Please enter a number: ";
    cin >> userInput;

    try {
        *userInputAsNum = stoi(userInput, &firstNotNumericIndex);
    }
    catch (...) {
        cout << "Not a number! bye" << endl;
        return 1;
    }

    if (firstNotNumericIndex != userInput.length()) {
        cout << "Not a number! bye" << endl;
        return 1;
    }

    return 0;
}

// Check if number is prime
bool isPrime(int number) {
    if (number <= 1) {
        return false;
    }

    double userNumSqrt = sqrt(number);

    for (int i = 2; i <= userNumSqrt; i++) {
        if (number % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    int userInputAsNum;
    int getInputOutput = getInputFromUser(&userInputAsNum);

    // If the input wasnt valid - bye
    if (getInputOutput != 0) {
        return 1;
    }

    bool isInputPrime = isPrime(userInputAsNum);

    if (isInputPrime) {
        cout << "The number " << userInputAsNum << " is prime!" << endl;
    }
    else {
        cout << "The number " << userInputAsNum << " is not prime!" << endl;
    }

    return 0;
}