#include <iostream>
#include <vector>
#include<climits>
#include <string>
#include <algorithm>
using namespace std;

string findLongestSubsequence(vector<string>& strings) {
    vector<int> freq(26, INT_MAX);
    for (const string& str : strings) {
        vector<int> temp(26, 0);
        for (char c : str) {
            temp[c - 'a']++;
        }
        for (int i = 0; i < 26; i++) {
            freq[i] = min(freq[i], temp[i]);
        }
    }

    string result;
    for (int i = 0; i < 26; i++) {
        for (int j = 0; j < freq[i]; j++) {
            result += static_cast<char>('a' + i);
        }
    }

    if (result.empty()) {
        return "no such string";
    }

    return result;
}

int main() {
    int N;
    cin >> N;
    vector<string> strings(N);

    for (int i = 0; i < N; i++) {
        cin >> strings[i];
    }

    string longestSubsequence = findLongestSubsequence(strings);
    cout << longestSubsequence << endl;

    return 0;
}
