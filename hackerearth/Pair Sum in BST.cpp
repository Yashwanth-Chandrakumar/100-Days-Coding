#include <unordered_set>

bool findPair(BinaryTreeNode* root, int k, unordered_set<int>& values) {
    if (root == nullptr) {
        return false;
    }

    if (values.find(k - root->data) != values.end()) {
        return true;
    }

    values.insert(root->data);

    return findPair(root->left, k, values) || findPair(root->right, k, values);
}

bool pairSumBst(BinaryTreeNode* root, int k) {
    unordered_set<int> values;
    return findPair(root, k, values);
}
