For each test case, output on a new line the answer — YES if 
�
S is easy to pronounce, and NO otherwise.

Each character of the output may be printed in either uppercase or lowercase. For example, the strings YES, yeS, yes, and YeS will all be treated as identical.

Constraints
1
≤
�
≤
100
1≤T≤100
1
≤
�
≤
100
1≤N≤100
�
S contains only lowercase Latin characters, i.e, the characters 

{a,b,c,…,z}
Sample 1:
Input
Output
5
5
apple
15
schtschurowskia
6
polish
5
tryst
3
cry
YES
NO
YES
NO
YES

Answer:
#include <iostream>
using namespace std;

bool vowel(char a) {
    return (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u');
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        string s;
        cin >> s;
        bool is_easy = true;

        int consecutive_consonants = 0;
        for (int j = 0; j < a; j++) {
            if (!vowel(s[j])) {
                consecutive_consonants++;
                if (consecutive_consonants >= 4) {
                    is_easy = false;
                    break;
                }
            } else {
                consecutive_consonants = 0; 
            }
        }

        cout << (is_easy ? "YES" : "NO") << endl;
    }
}
