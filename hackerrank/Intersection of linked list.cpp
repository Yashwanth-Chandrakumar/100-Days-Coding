/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
            int data;
            Node *next;
            Node()
            {
                this->data = 0;
                next = NULL;
            }
            Node(int data)
            {
                this->data = data;
                this->next = NULL;
            }
            Node(int data, Node* next)
            {
                this->data = data;
                this->next = next;
            }
        };

*****************************************************************/
#include<bits/stdc++.h>
Node* findIntersection(Node *headA, Node *headB)
{
    unordered_set<Node*> nodes_set;

    Node* current = headA;
    while (current != nullptr) {
        nodes_set.insert(current);
        current = current->next;
    }

    current = headB;
    while (current != nullptr) {
        if (nodes_set.find(current) != nodes_set.end()) {
            return current;
        }
        current = current->next;
    }

    return nullptr;
}
