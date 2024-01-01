/****************************************************************
 
    Following is the class structure of the Node class:

        class Node
        {
        public:
	        int data;
	        Node *next;
	        Node(int data)
	        {
		        this->data = data;
		        this->next = NULL;
	        }
        };

*****************************************************************/
Node* InsertNode(Node *head, int pos, Node* newNode)
{
    if (pos==0){
		newNode->next = head;
		return newNode;
	}
	Node *temp = head;
	for (int i = 0; i < pos - 1 && temp != nullptr; ++i) {
        temp = temp->next;
    }

    if (temp == nullptr) {
        std::cerr << "Invalid position." << std::endl;
        return head;
    }

    newNode->next = temp->next;
    temp->next = newNode;

    return head;
}
