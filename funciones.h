#ifndef FUNCIONES_H
#define FUNCIONES_H

#include <string>

const int SIZE = 10;
extern int numbers[SIZE];

void printArray(int arr[], int size, const std::string& message);
void bubbleSort(int arr[], int size);
int findMax(int arr[], int size);
int findMin(int arr[], int size);
double calculateAverage(int arr[], int size);
int countOccurrences(int arr[], int size, int value);

#endif
