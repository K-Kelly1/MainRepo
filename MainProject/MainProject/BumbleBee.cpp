#include <cmath>
#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

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

    if (userInputAsNum < 1) {
        throw std::exception("Not a positive number! bye");
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

/**
 * @brief Create primes vector of size vectorLen
 * @param primesVector the vector to insert primes to
 * @param vectorLen the len of the vector
 */
void createPrimesVector(vector<int>& primesVector, int vectorLen) {
    int primesCounter = 0;
    int currNum = 2;
    bool foundInThisIteration = false;

    while (primesCounter < vectorLen) {
        while (!foundInThisIteration) {
            bool isNumPrime = isPrime(currNum);

            if (isNumPrime) {
                foundInThisIteration = true;
                primesVector[primesCounter] = currNum;
            }

            currNum++;
        }

        foundInThisIteration = false;
        primesCounter++;
    }
}

/**
 * @brief Print vector
 * @param vector the vector to print
 * @param vectorLen the len of the vector
 */
void printVector(vector<int>& vector, int vectorLen) {
    cout << "The vector: " << endl;

    for (int i = 0; i < vectorLen; i++) {
        cout << vector[i] << " ";
    }
}

int main()
{
    int numOfPrimesToFind = 0;

    try
    {
        numOfPrimesToFind = getInputFromUser();
    }
    catch (const std::exception& e)
    {
        cout << e.what() << endl;
        return 1;
    }

    vector<int> primesVector{0};
    primesVector.resize(numOfPrimesToFind);

    createPrimesVector(primesVector, numOfPrimesToFind);
    printVector(primesVector, numOfPrimesToFind);

    return 0;
}