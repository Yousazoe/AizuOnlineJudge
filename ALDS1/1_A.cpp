#include <iostream>
using namespace std;

void trace(int A[], int N) {
    for (int i = 0; i < N; ++i) {
        if (i > 0) cout << " ";
        cout << A[i];
    }
    cout << endl;
}

void insertionSort(int A[], int N) {
    for (int i = 0; i < N; ++i) {
        int tmp = A[i];
        int j = i - 1;

        while (j >= 0 && A[j] > tmp) {
            A[j + 1] = A[j];
            j--;
        }
        A[j + 1] = tmp;

        trace(A, N);
    }
}

int main() {
    int N;
    cin >> N;

    int A[N];
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    insertionSort(A, N);

    return 0;
}