/************************************************************

    Following is the TreeNode class structure:

    template <typename T>
    class TreeNode
    {
    public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T dat)
        {
            this->data = dat;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

void flattenBinaryTree(TreeNode<int>* root)
{
    if (root == nullptr)
        return;

    TreeNode<int>* current = root;
    while (current != nullptr) {
        if (current->left != nullptr) {
            TreeNode<int>* predecessor = current->left;

            while (predecessor->right != nullptr)
                predecessor = predecessor->right;

            predecessor->right = current->right;
            current->right = current->left;
            current->left = nullptr;
        }

        current = current->right;
    }
}
