/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
void treesum(vector<int>&arr,TreeNode* root){
    if(root!=nullptr){
        treesum(arr,root->left);
        arr.push_back(root->val);
        treesum(arr,root->right);
    }
}
    int rangeSumBST(TreeNode* root, int low, int high) {
        vector<int>arr;
        treesum(arr,root);
        int cnt=0;
        for (int i=0;i<arr.size();i++){
            if(arr[i]>=low && arr[i]<=high){
                cnt+=arr[i];
            }
        }
        return cnt;
    }
};
