#include <iostream>
using namespace std;

void mergeArrays(int A[], int B[], int C[], int N) {
    int i = 0, j = 0, k = 0;

    while (i < N && j < N) {
        if (A[i] < B[j]) {
            C[k++] = A[i++];
        } else {
            C[k++] = B[j++];
        }
    }

    while (i < N) {
        C[k++] = A[i++];
    }

    while (j < N) {
        C[k++] = B[j++];
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    const int N = 5;
    int A[N] = {1, 3, 5, 7, 9};
    int B[N] = {2, 4, 6, 8, 10};
    int C[2 * N];

    mergeArrays(A, B, C, N);
    
    cout << "Merged array: ";
    printArray(C, 2 * N);

    return 0;
}