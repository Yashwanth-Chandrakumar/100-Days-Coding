Node *current = head;
    Node *lastNonNine = nullptr;

    // Traverse the linked list
    while (current != nullptr) {
        if (current->data != 9) {
            lastNonNine = current;
        }
        current = current->next;
    }

    // Increment the last non-nine node or add a new node at the beginning
    if (lastNonNine != nullptr) {
        lastNonNine->data += 1;
        current = lastNonNine->next;
    } else {
        Node *newNode = new Node(1);
        newNode->next = head;
        head = newNode;
        current = head->next;
    }

    // Set all the nodes after the last non-nine node to 0
    while (current != nullptr) {
        current->data = 0;
        current = current->next;
    }

    return head;
