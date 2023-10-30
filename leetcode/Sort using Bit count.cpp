class Solution {
public:
    static bool bitsort(int a,int b){
        int bitcounta=__builtin_popcount(a);
        int bitcountb=__builtin_popcount(b);
        
        if(bitcounta==bitcountb){
            return a<b;
        }
        return bitcounta<bitcountb;
        
    }
    vector<int> sortByBits(vector<int>& arr) {
        int brr[arr.size()];
        for(int i=0;i<arr.size();i++){
            brr[i]=arr[i];
        }
        sort(brr,brr+arr.size(),bitsort);
        for(int i=0;i<arr.size();i++){
            arr[i]=brr[i];
        }
    return arr;
    }
};
