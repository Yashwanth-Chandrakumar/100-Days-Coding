Given an array of strings strs, group the anagrams together. You can return the answer in any order.

An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.

 

Example 1:

Input: strs = ["eat","tea","tan","ate","nat","bat"]
Output: [["bat"],["nat","tan"],["ate","eat","tea"]]
Example 2:

Input: strs = [""]
Output: [[""]]
Example 3:

Input: strs = ["a"]
Output: [["a"]]

Answer:
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        int n = strs.size();
        vector<string> arr(n);
        
        for (int i = 0; i < n; i++) {
            arr[i] = strs[i];
            sort(arr[i].begin(), arr[i].end());
        }
        
        unordered_map<string, vector<string>> anagramGroups;

        for (int i = 0; i < n; i++) {
            anagramGroups[arr[i]].push_back(strs[i]);
        }

        for (const auto& entry : anagramGroups) {
            ans.push_back(entry.second);
        }

        return ans;
    }
};
