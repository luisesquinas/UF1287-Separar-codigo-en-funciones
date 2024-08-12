#include <iostream>
#include "funciones.h"

using namespace std;

int main() {
    setlocale(LC_ALL, "ca_ca.utf8");

    printArray(numbers, SIZE, "Array original: ");
    
    bubbleSort(numbers, SIZE);
    printArray(numbers, SIZE, "Array ordenado: ");

    int maxVal = findMax(numbers, SIZE);
    cout << "Valor máximo: " << maxVal << endl;

    int minVal = findMin(numbers, SIZE);
    cout << "Valor mínimo: " << minVal << endl;

    double average = calculateAverage(numbers, SIZE);
    cout << "Promedio: " << average << endl;

    int valueToFind = 5;
    int occurrences = countOccurrences(numbers, SIZE, valueToFind);
    cout << "El valor " << valueToFind << " aparece " << occurrences << " veces en el array." << endl;

    return 0;
}
