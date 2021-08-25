#include <iostream>
using namespace std;

void trace(int A[], int N) {
    for (int i = 0; i < N; ++i) {
        if (i > 0) cout << " ";

        cout << A[i];
    }
    cout << endl;
}

int selectionSort(int A[], int N) {
    int min = 0;
    int count = 0;
    for (int i = 0; i < N; ++i) {
        min = i;
        for (int j = N - 1; j >= i; --j) {
            if (A[j] < A[min])
                min = j;
        }
        swap(A[i], A[min]);
        count++;
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

    cout << selectionSort(A, N) << endl;
    return 0;
}