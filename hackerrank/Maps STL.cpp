#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    int Q;
    cin >> Q;
    map<string, int> studentMarks;

    for (int i = 0; i < Q; i++) {
        int queryType;
        cin >> queryType;

        if (queryType == 1) {
            string name;
            int marks;
            cin >> name >> marks;
            studentMarks[name] += marks;
        } else if (queryType == 2) {
            string name;
            cin >> name;
            studentMarks.erase(name);
        } else if (queryType == 3) {
            string name;
            cin >> name;
            auto it = studentMarks.find(name);
            if (it != studentMarks.end()) {
                cout << it->second << endl;
            } else {
                cout << "0" << endl;
            }
        }
    }

    return 0;
}
