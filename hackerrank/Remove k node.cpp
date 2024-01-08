Node* removeKthNodeFromEnd(Node* head, int k) {
    if (!head) {
        return nullptr;
    }

    Node* fast = head;
    Node* slow = head;
    Node* prev = nullptr;

    for (int i = 0; i < k; ++i) {
        if (!fast) {
            return head;
        }
        fast = fast->next;
    }

    while (fast) {
        prev = slow;
        slow = slow->next;
        fast = fast->next;
    }

    if (!prev) {
        Node* newHead = head->next;
        delete head;
        return newHead;
    }

    prev->next = slow->next;
    delete slow;

    return head;
}
