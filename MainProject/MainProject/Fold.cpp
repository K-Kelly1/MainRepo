#include "Fold.h"

void printMultiplicationTable(int matrix[multiplicationTableLen][multiplicationTableLen]) {
    for (int i = 0; i < multiplicationTableLen; i++)
    {
        for (int j = 0; j < multiplicationTableLen; j++)
        {
            cout << matrix[i][j] << "\t";
        }

        cout << endl;
    }
}

void createMultiplicationTable(int multiplicationTable[multiplicationTableLen][multiplicationTableLen]) {
    multiplicationTable[0][0] = 0;

    for (int i = 1; i < multiplicationTableLen; i++)
    {
        multiplicationTable[0][i] = i;
        multiplicationTable[i][0] = i;
    }

    for (int i = 1; i < multiplicationTableLen; i++)
    {
        for (int j = 1; j < multiplicationTableLen; j++)
        {
            multiplicationTable[i][j] = multiplicationTable[i][0] * multiplicationTable[0][j];
        }
    }
}

int main() {
    int multiplicationTable[multiplicationTableLen][multiplicationTableLen] = {0};

    createMultiplicationTable(multiplicationTable);
    printMultiplicationTable(multiplicationTable);

    return 0;
}