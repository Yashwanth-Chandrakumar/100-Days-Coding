#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    bool possible = true;
    string result = s;

    for (int i = 0; i < n; i++) {
        if (s[i] == '.') {
            if (i - 1 >= 0 && s[i - 1] != '.') {
                result[i] = (s[i - 1] == 'H') ? 'B' : 'H';
            } else if (i + 1 < n && s[i + 1] != '.') {
                result[i] = (s[i + 1] == 'H') ? 'B' : 'H';
            } else {
                result[i] = 'B'; // Default to placing a fence
            }
        } else if (s[i] == 'H') {
            if (i - 1 >= 0 && s[i - 1] == 'B') {
                possible = false;
                break;
            }
            if (i + 1 < n && s[i + 1] == 'B') {
                possible = false;
                break;
            }
        }
    }

    if (possible) {
        cout << "YES" << endl;
        cout << result << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
