#include <iostream>
using namespace std;

int* mergeArraysDynamic(int* A, int* B, int N) {
    int* C = new int[2 * N];
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

    return C;
}

void printArray(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int N = 5;
    int* A = new int[N]{1, 3, 5, 7, 9};
    int* B = new int[N]{2, 4, 6, 8, 10};

    int* C = mergeArraysDynamic(A, B, N);
    
    cout << "Merged array: ";
    printArray(C, 2 * N);

    delete[] A;
    delete[] B;
    delete[] C;

    return 0;
}