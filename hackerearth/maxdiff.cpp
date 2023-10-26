#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;
        vector<int> A(N);

        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }

        sort(A.rbegin(), A.rend());

        long long sumS1 = 0;
        long long sumS2 = 0;

        for (int i = 0; i < N; i++) {
            if (i % 2 == 0) {
                sumS1 += A[i];
            } else {
                sumS2 += A[i];
            }
        }

        long long weightDifference = sumS1 - sumS2;
        cout << weightDifference << endl;
    }

    return 0;
}
