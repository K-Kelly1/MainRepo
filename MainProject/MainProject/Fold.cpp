#include "Fold.h"

using std::cin;
using std::cout;
using std::endl;

void printMultiplicationTable(int matrix[MULTIPLICATION_TABLE_LEN][MULTIPLICATION_TABLE_LEN]) {
    for (int i = 0; i < MULTIPLICATION_TABLE_LEN; i++) {
        for (int j = 0; j < MULTIPLICATION_TABLE_LEN; j++) {
            cout << matrix[i][j] << "\t";
        }

        cout << endl;
    }
}

void initializeMultiplicationTable(int multiplicationTable[MULTIPLICATION_TABLE_LEN][MULTIPLICATION_TABLE_LEN]) {
    multiplicationTable[0][0] = 0;

    for (int i = 0; i < MULTIPLICATION_TABLE_LEN; i++) {
        for (int j = 0; j < MULTIPLICATION_TABLE_LEN; j++) {
            if (i == 0) {
                multiplicationTable[0][j] = j;
            }
            else if (j == 0) {
                multiplicationTable[i][0] = i;
            }
            else {
                multiplicationTable[i][j] = multiplicationTable[i][0] * multiplicationTable[0][j];
            }
        }
    }
}

int main() {
    int multiplicationTable[MULTIPLICATION_TABLE_LEN][MULTIPLICATION_TABLE_LEN] = {0};

    initializeMultiplicationTable(multiplicationTable);
    printMultiplicationTable(multiplicationTable);

    return 0;
}