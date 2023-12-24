/*************************************************************
    Following is the Binary Tree node structure

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

*************************************************************/

BinaryTreeNode<int>* deleteNode(BinaryTreeNode<int>* root, int key) {
    if (root == nullptr) {
        return root;
    }

    if (key < root->data) {
        root->left = deleteNode(root->left, key);
    } else if (key > root->data) {
        root->right = deleteNode(root->right, key);
    } else {
        if (root->left == nullptr) {
            BinaryTreeNode<int>* temp = root->right;
            delete root;
            return temp;
        } else if (root->right == nullptr) {
            BinaryTreeNode<int>* temp = root->left;
            delete root;
            return temp;
        }

        BinaryTreeNode<int>* temp = root->right;
        while (temp->left != nullptr) {
            temp = temp->left;
        }

        root->data = temp->data;

        root->right = deleteNode(root->right, temp->data);
    }

    return root;
}
