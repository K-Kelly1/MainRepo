#include <cmath>
#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;

const int ILLEGAL_NUM = 1;

/**
 * @brief Get input from user
 * @return the user input as int
 */
int getInputFromUser() {
    int userInputAsNum = 0;
    string userInput = "";
    size_t firstNotNumericIndex = 0;

    cout << "Please enter a number: ";
    cin >> userInput;

    try {
        userInputAsNum = stoi(userInput, &firstNotNumericIndex);
    } catch (...) {
        throw std::exception("Not a number! bye");
    }

    if (firstNotNumericIndex != userInput.length()) {
        throw std::exception("Not a number! bye");
        
    }

    return userInputAsNum;
}

/**
 * @brief Check if number is prime
 * @param number The nmber to check if prime
 * @return true if prime, else - false
 */
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
    int userInputAsNum = 0;

    try {
        userInputAsNum = getInputFromUser();
    } catch (const std::exception& e) {
        cout << e.what() << endl;
        return 1;
    }

    bool isInputPrime = isPrime(userInputAsNum);

    if (isInputPrime) {
        cout << "The number " << userInputAsNum << " is prime!" << endl;
    } else {
        cout << "The number " << userInputAsNum << " is not prime!" << endl;
    }

    return 0;
}