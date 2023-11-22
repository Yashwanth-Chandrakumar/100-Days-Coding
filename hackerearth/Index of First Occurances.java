class Solution {
    public int strStr(String haystack, String needle) {
        int a = haystack.length();
        int b = needle.length();
        int ans=-1;
        if(haystack.contains(needle)){
         if(b==1){
            for(int i=0;i<a;i++){
                if(haystack.charAt(i)==needle.charAt(0)){
                    ans=i;
                    break;
                }
            }
        }
        else{
            for(int i=0;i<a-b;i++){
                if(needle.equals(haystack.substring(i,i+b))){
                    ans=i;
                    break;
                }
            }
            if(ans==-1){
                ans=a-b;
            }
        }
        }
        else{
            return -1;
        }
return ans;
    }
}
