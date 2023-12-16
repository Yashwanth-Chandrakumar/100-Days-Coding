class Solution {
public:
    bool isAnagram(string s, string t) {
            unordered_map<char,int>ans;
            for(int i=0;i<s.length();i++){
                ans[s[i]]++;
            }
            for(int i=0;i<t.length();i++){
                ans[t[i]]--;
            }
            for(auto &x:ans){
                if(x.second!=0){
                    return false;
                }
            }
            return true;
    }
};
