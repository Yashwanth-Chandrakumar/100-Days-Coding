#include <iostream>
#include <vector>

using namespace std;

int findEquilibriumPoint(vector<int>& arr) {
    int totalSum = 0;
    int leftSum = 0;

    for (int i = 0; i < arr.size(); i++) {
        totalSum += arr[i];
    }

    for (int i = 0; i < arr.size(); i++) {
        totalSum -= arr[i];
        if (leftSum == totalSum) {
            return i + 1;
        }
        leftSum += arr[i];
    }

    return -1;
}

int main() {
    vector<int> arr;
    int num;
    while (cin >> num) {
        arr.push_back(num);
    }

    int equilibriumIndex = findEquilibriumPoint(arr);
    cout << equilibriumIndex << endl;

    return 0;
}
