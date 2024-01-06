void getData(vector<int>&arr, Node * head){
    while(head!=nullptr){
        arr.push_back(head->data);
        head = head->next;
    }
}
Node* findMiddle(Node* head) {
    vector<int> arr;
    getData(arr, head);
    int midIndex = arr.size() / 2;

    Node* middle = head;
    for (int i = 0; i < midIndex; ++i) {
        middle = middle->next;
    }

    return middle;
}
