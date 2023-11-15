class Solution {
public:
    int longestPalindrome(string s) {
        int arr[200]={0};
        for(int i=0;i<s.length();i++){
             arr[s[i]-'A']++;
        }
        int count=0;
        for(int i=0;i<200;i++){
            if(arr[i]!=0){
                if(arr[i]%2==1){
                    count++;
                }
            }
        }
        if(count>0)
        return s.length()-count+1;
        else{
            return s.length();
        }
}
};
