/*
    Following is the Binary Tree node structure:

    template <typename T>
    class BinaryTreeNode
    {
    public:
        T data;
        BinaryTreeNode<T> *left, *right;
        BinaryTreeNode() : data(0), left(NULL), right(NULL) {}
        BinaryTreeNode(T x) : data(x), left(NULL), right(NULL) {}
        BinaryTreeNode(T x, BinaryTreeNode<T> *left, BinaryTreeNode<T> *right) : data(x), left(left), right(right) {}
    };

*/

bool searchInBST(BinaryTreeNode<int> *root, int x) {
    if (root == nullptr) {
        return false;  
    }

    if (root->data == x) {
        return true;   
    }

    if (x < root->data) {
        return searchInBST(root->left, x);  
    } else {
        return searchInBST(root->right, x); 
    }
}
