#include <bits/stdc++.h> 
int maximumSwap(int n) {
	vector<int> digits;
    while (n > 0) {
        digits.push_back(n % 10);
        n /= 10;
    }
    reverse(digits.begin(), digits.end());

    int N = digits.size();

    vector<int> lastOccur(10, -1);
    for (int i = 0; i < N; ++i) {
        lastOccur[digits[i]] = i;
    }

    for (int i = 0; i < N - 1; ++i) {
        for (int d = 9; d > digits[i]; --d) {
            if (lastOccur[d] > i) {
                swap(digits[i], digits[lastOccur[d]]);
                int result = 0;
                for (int j = 0; j < N; ++j) {
                    result = result * 10 + digits[j];
                }
                return result;
            }
        }
    }

    int result = 0;
    for (int i = 0; i < N; ++i) {
        result = result * 10 + digits[i];
    }
    return result;
}
