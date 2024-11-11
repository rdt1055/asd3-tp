#include <iostream>
using namespace std;

void readArray(int* A, int N) {
    cout << "Enter " << N << " elements for the array: ";
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
}

void findMinMax(const int* A, int N, int &minValue, int &minIndex, int &maxValue, int &maxIndex) {
    minValue = A[0];
    maxValue = A[0];
    minIndex = 0;
    maxIndex = 0;

    for (int i = 1; i < N; i++) {
        if (A[i] < minValue) {
            minValue = A[i];
            minIndex = i;
        }
        if (A[i] > maxValue) {
            maxValue = A[i];
            maxIndex = i;
        }
    }
}

void sortArray(int* A, int N) {
    for (int i = 0; i < N - 1; i++) {
        for (int j = i + 1; j < N; j++) {
            if (A[i] > A[j]) {
                swap(A[i], A[j]);
            }
        }
    }
}

void printArray(const int* A, int N) {
    for (int i = 0; i < N; i++) {
        cout << A[i] << " ";
    }
    cout << endl;
}

int main() {
    int N;
    cout << "Enter the size of the array: ";
    cin >> N;

    if (N <= 0) {
        cout << "Invalid array size." << endl;
        return 1;
    }

    int* A = new int[N];

    readArray(A, N);

    int minValue, minIndex, maxValue, maxIndex;
    findMinMax(A, N, minValue, minIndex, maxValue, maxIndex);

    cout << "Minimum value: " << minValue << " at index " << minIndex << endl;
    cout << "Maximum value: " << maxValue << " at index " << maxIndex << endl;

    sortArray(A, N);

    cout << "Sorted array: ";
    printArray(A, N);

    delete[] A;

    return 0;
}