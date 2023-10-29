#include <iostream>
using namespace std;

string superReducedString(string s) {
    string reduced;

    for (char c : s) {
        if (!reduced.empty() && reduced.back() == c) {
            reduced.pop_back(); 
        } else {
            reduced.push_back(c); 
        }
    }

    if (reduced.empty()) {
        return "Empty String";
    } else {
        return reduced;
    }
}

int main() {
    string s;
    cin >> s;

    string result = superReducedString(s);

    cout << result << endl;

    return 0;
}
