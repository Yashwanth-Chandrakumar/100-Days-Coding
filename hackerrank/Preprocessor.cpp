#include <iostream>
#include <vector>

#define MAX(a, b) ((a > b) ? a : b)
#define MIN(a, b) ((a < b) ? a : b)

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int maximum = arr[0];
    int minimum = arr[0];

    for (int i = 1; i < n; i++) {
        maximum = MAX(maximum, arr[i]);
        minimum = MIN(minimum, arr[i]);
    }

    int result = maximum - minimum;

    cout << "Result = " << result << endl;

    return 0;
}
