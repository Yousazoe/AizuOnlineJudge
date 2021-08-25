#include <iostream>
using namespace std;

void trace(int A[], int N) {
    for (int i = 0; i < N; ++i) {
        if (i > 0) cout << " ";

        cout << A[i];
    }
    cout << endl;
}

int bubbleSort(int A[], int N) {
    int count = 0;
    for (int i = 0; i < N; ++i) {
        for (int j = N - 1; j >= i; --j) {
            if (A[j] < A[j - 1]) {
                swap(A[j], A[j - 1]);
                count++;
            }
        }
    }
    trace(A, N);
    return count;
}

int main() {
    int N;
    cin >> N;

    int A[N];
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    cout << bubbleSort(A, N) << endl;
    return 0;
}