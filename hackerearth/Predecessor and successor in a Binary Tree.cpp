void findPreSuc(TreeNode* root, TreeNode*& pre, TreeNode*& suc, int key)
{
    if (root == nullptr)  return ;
 
    if (root->data == key)
    {
        if (root->left != nullptr)
        {
            TreeNode* tmp = root->left;
            while (tmp->right)
                tmp = tmp->right;
            pre = tmp ;
        }
 
        if (root->right != nullptr)
        {
            TreeNode* tmp = root->right ;
            while (tmp->left)
                tmp = tmp->left ;
            suc = tmp ;
        }
        return ;
    }
 
    if (root->data > key)
    {
        suc = root ;
        findPreSuc(root->left, pre, suc, key) ;
    }
    else
    {
        pre = root ;
        findPreSuc(root->right, pre, suc, key) ;
    }
}

pair<int, int> predecessorSuccessor(TreeNode *root, int key)
{
    TreeNode *pre = nullptr, *suc = nullptr;
    
    findPreSuc(root, pre, suc, key);
    
    pair<int, int> ans;
    ans.first = (pre != nullptr) ? pre->data : -1;
    ans.second = (suc != nullptr) ? suc->data : -1;
    
    return ans;
}
