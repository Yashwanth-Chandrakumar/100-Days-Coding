class Stack {
private:
    int capacity;
    std::vector<int> stack;
    int topIndex;

public:
    Stack(int cap) {
        capacity = cap;
        stack.resize(cap);
        topIndex = -1;
    }

    void push(int num) {
        if (!isFull()) {
            topIndex++;
            stack[topIndex] = num;
        }
    }

    int pop() {
        if (!isEmpty()) {
            int popped = stack[topIndex];
            topIndex--;
            return popped;
        }
        return -1;
    }

    int top() {
        if (!isEmpty()) {
            return stack[topIndex];
        }
        return -1;
    }

    int isEmpty() {
        return topIndex == -1;
    }

    int isFull() {
        return topIndex == capacity - 1;
    }
};
