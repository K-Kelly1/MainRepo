#include "Fold.h"

using std::cin;
using std::cout;
using std::endl;

void printMultiplicationTable(unsigned int matrix[MULTIPLICATION_TABLE_LEN][MULTIPLICATION_TABLE_LEN]) {
    for (int i = 0; i < MULTIPLICATION_TABLE_LEN; i++) {
        for (int j = 0; j < MULTIPLICATION_TABLE_LEN; j++) {
            cout << matrix[i][j] << "\t";
        }

        cout << endl;
    }
}

void initializeMultiplicationTable(unsigned int multiplicationTable[MULTIPLICATION_TABLE_LEN][MULTIPLICATION_TABLE_LEN]) {
    multiplicationTable[0][0] = 0;

    for (int i = 1; i < MULTIPLICATION_TABLE_LEN; i++) {
        for (int j = 1; j < MULTIPLICATION_TABLE_LEN; j++) {
            multiplicationTable[i][j] = i*j;
        }
    }
}

int main() {
    unsigned int multiplicationTable[MULTIPLICATION_TABLE_LEN][MULTIPLICATION_TABLE_LEN] = {0};

    initializeMultiplicationTable(multiplicationTable);
    printMultiplicationTable(multiplicationTable);

    return 0;
}