class Solution {
public:
    vector<int> findMode(TreeNode* root) {
        vector<int> arr;
        map<int, int> freq; 
        
        inorderTraversal(root, freq);
        
        int maxFrequency = 0;
        
        for (const auto& pair : freq) {
            if (pair.second > maxFrequency) {
                maxFrequency = pair.second;
            }
        }
        
        for (const auto& pair : freq) {
            if (pair.second == maxFrequency) {
                arr.push_back(pair.first);
            }
        }
        
        return arr;
    }
    
private:
    void inorderTraversal(TreeNode* node, map<int, int>& freq) {
        if (node == nullptr) return;
        
        inorderTraversal(node->left, freq);
        
        freq[node->val]++;
        
        inorderTraversal(node->right, freq);
    }
};
