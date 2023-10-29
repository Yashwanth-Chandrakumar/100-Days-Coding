#include <iostream>
using namespace std;

const long long MOD = 1000000007; // 10^9 + 7

long long power(long long a, long long b, long long mod) {
    long long result = 1;
    while (b > 0) {
        if (b % 2 == 1) {
            result = (result * a) % mod;
        }
        a = (a * a) % mod;
        b /= 2;
    }
    return result;
}

int main() {
    long long A, B;
    cin >> A >> B;

    long long result = power(A, B, MOD);
    cout << result << endl;

    return 0;
}
