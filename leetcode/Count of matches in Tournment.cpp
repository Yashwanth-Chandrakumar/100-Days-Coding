class Solution {
public:
    int numberOfMatches(int n) {
        int count=0;
        while(n!=1){
            if(n%2==0){
                count+=n/2;
                n/=2;
            }
            else{
                count+=n/2;
                n/=2;
                n+=1;
            }
        }
        return count;
    }
};
