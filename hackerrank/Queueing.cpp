#include <iostream>
#include <queue>
using namespace std;

queue<int> reverseElements(queue<int> q, int k, int n) {
    // Create a stack to temporarily store the first k elements
    stack<int> s;
    
    // Push the first k elements into the stack
    for (int i = 0; i < k; i++) {
        s.push(q.front());
        q.pop();
    }
    
    // Enqueue the reversed elements from the stack
    while (!s.empty()) {
        q.push(s.top());
        s.pop();
    }
    
    // Continue with the rest of the elements
    for (int i = k; i < n; i++) {
        q.push(q.front());
        q.pop();
    }
    
    return q;
}

int main() {
    int t;
    cin >> t; // Number of test cases

    while (t--) {
        int n, k;
        cin >> n >> k; // Size of the queue and number of elements to reverse
        queue<int> q;

        for (int i = 0; i < n; i++) {
            int element;
            cin >> element;
            q.push(element);
        }

        queue<int> reversedQueue = reverseElements(q, k, n);

        // Print the reversed queue
        while (!reversedQueue.empty()) {
            cout << reversedQueue.front() << " ";
            reversedQueue.pop();
        }

        cout << endl;
    }

    return 0;
}
