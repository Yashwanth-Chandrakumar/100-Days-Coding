#include <iostream>
using namespace std;

int main() {
    long n;
    cin >> n;
    
    long arr[n];
    long brr[1000000] = {0};

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        brr[arr[i] - 1]++;
    }

    long max = 0;
    for (int i = 0; i < 1000000; i++) {
        if (brr[i] > max) {
            max = brr[i];
        }
    }

    long count = 0;
    for (int i = 0; i < 1000000; i++) {
        if (brr[i] == max) {
            count++;
        }
    }

    cout << count;
    return 0;
}
