#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    while (t--) {
        int n; 
        cin >> n;
        string s;
        cin >> s;
        unordered_map<char, int> m1;
        for (int i = 0; i<n; i++) {
            m1[s[i]]++;
        }
        bool ans = true;
        for (char i = 'a'; i<='z'; i++) {
            if (!m1.count(i)) {
                continue;
            }
            else if (m1[i]%2 != 0) {
                ans = false;
                break;
            }
        }
        if (ans) {
            cout << "Yes" << endl;
        }
        else {
            cout << "No" << endl;
        }
    }
}
