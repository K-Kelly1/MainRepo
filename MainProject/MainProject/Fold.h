#pragma once
#include <iostream>

const unsigned int MULTIPLICATION_TABLE_LEN = 11;

/*
* @brief - prints a multiplication table
* @param matrix - the multiplication table to print
*/
void printMultiplicationTable(int matrix[MULTIPLICATION_TABLE_LEN][MULTIPLICATION_TABLE_LEN]);

/*
 * @brief - initialize a multiplication table
 * @param multiplicationTable - the multiplication table to initialize
 */
void initializeMultiplicationTable(int multiplicationTable[MULTIPLICATION_TABLE_LEN][MULTIPLICATION_TABLE_LEN]);
