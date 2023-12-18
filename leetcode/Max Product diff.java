class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        int maxa=0;
        int maxb=0;
        int mina=INT_MAX;
        int minb=INT_MAX;
        for (int n : nums) {
            if (n < mina) {
                minb = mina;
                mina = n;
            } else if (n < minb) {
                minb = n;
            }

            if (n > maxa) {
                maxb = maxa;
                maxa = n;
            } else if (n > maxb) {
                maxb = n;
            }
        }
        return (maxa*maxb)-(mina*minb);
    }
};
