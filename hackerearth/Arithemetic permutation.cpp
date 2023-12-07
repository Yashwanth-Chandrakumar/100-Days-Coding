#include <bits/stdc++.h> 
int operate(char op, int a, int b) {
    if (op == '+') return a + b;
    if (op == '-') return a - b;
    if (op == '*') return a * b;
    return 0;
}

vector<int> diffWaysToCompute(string s) {
    vector<int> result;

    for (int i = 0; i < s.size(); i++) {
        char c = s[i];
        if (c == '+' || c == '-' || c == '*') {
            vector<int> left = diffWaysToCompute(s.substr(0, i));
            vector<int> right = diffWaysToCompute(s.substr(i + 1));

            for (int l : left) {
                for (int r : right) {
                    result.push_back(operate(c, l, r));
                }
            }
        }
    }

    if (result.empty()) {
        result.push_back(stoi(s));
    }

    return result;
}
